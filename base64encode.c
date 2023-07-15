#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "base64.h"

int main(int argc, char **argv) {
    for (int i = 1; i < argc; i++) {
        
        fprintf(stdout, "[%d]: %s\n", i, base64_encode(argv[i]));
    }
    exit(EXIT_SUCCESS);
}