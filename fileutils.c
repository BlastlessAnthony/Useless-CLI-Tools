#include "fileutils.h"
#include <stdio.h>

int file_exists(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return -1;
    }

    return 0;
}

