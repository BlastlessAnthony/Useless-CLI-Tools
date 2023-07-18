#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    for (int i = 1; i < argc; ++i) {
        FILE *file = fopen(argv[i], "r");
        if (file == NULL) {
            fprintf(stderr, "[%d] \"%s\" doesn't exist.\n", i, argv[i]);
            continue;
        }

        fseek(file, 0, SEEK_END);
        fprintf(stdout, "[%d] \"%s\": ~%ld byte(s).\n", i, argv[i], ftell(file));
        fclose(file);
    }
    exit(EXIT_SUCCESS);
}   