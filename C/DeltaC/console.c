#include <stdio.h>
#include <string.h>

#include "./console.h"

void DeltaC_print(char str[])
{
    char resultado[strlen(str) + 1];
    strcpy(resultado, str);
    strcat(resultado, "\n");
    printf("%s", resultado);
}