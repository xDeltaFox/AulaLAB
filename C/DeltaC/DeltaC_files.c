#include <stdio.h>
#include <stdlib.h>

#include "./DeltaC_files.h"

FILE *openfile(char *file_name, char *mode)
{
    FILE *file = fopen(file_name, mode);

    if (!file)
    {
        system("pwd");
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }

    return file;
}