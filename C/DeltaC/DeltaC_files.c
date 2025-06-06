#include <stdio.h>
#include <stdlib.h>

#include "./DeltaC_files.h"

FILE *DeltaC_openfile(char *file_name, char *mode)
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

int DeltaC_get_lines_file(FILE *file)
{
    int lines = 0, ch = 0;
    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lines++;
        }
    }
    if (ch != '\n' && lines != 0)
        lines++;

    return lines;
}