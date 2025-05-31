#include <stdio.h>
#include <string.h>

#include "./DeltaC_console.h"

// Imprime somente strings e concatena '\n' para pula a linha automaticamente.
// Essa função não suporta impressão de variaveis e concatenação de formatos: '%d'.
void DeltaC_print(char str[])
{
    char resultado[strlen(str) + 1];
    strcpy(resultado, str);
    strcat(resultado, "\n");
    printf("%s", resultado);
}