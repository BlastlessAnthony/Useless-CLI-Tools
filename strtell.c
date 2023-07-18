#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

    for (int i = 1; i < argc; ++i) {
        fprintf(stdout, "[%d]: \"%s\" Size: %lu\n", i, argv[i], strlen(argv[i]));
    }
    exit(EXIT_SUCCESS);
}