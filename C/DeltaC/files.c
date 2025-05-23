#include <stdio.h>
#include <stdlib.h>

FILE openfile(char *file_name, char *mode)
{
    FILE *file = fopen(file_name, mode);

    if (!file)
        exit(1);

    return (*file);
}