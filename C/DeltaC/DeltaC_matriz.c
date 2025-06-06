#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "DeltaC_matriz.h"

// matriz *this = NULL; -> Pensamanto de Orientação a Objeto ;-; 
// Tentei criar uma estrutura para evitar ter que passar a matriz como parametro toda santa vez.
// Percebi que não daria certo. Como é uma variável, ela seria sobreposta sempre que tentasse criar uma nova matriz, por exemplo.

matriz *DeltaC_criar_mariz(int n_colunas, int n_linhas)
{
    matriz *nmatriz = (matriz *)malloc(sizeof(matriz));
    nmatriz->colunas = n_colunas;
    nmatriz->linhas = n_linhas;
    nmatriz->valor = (int **)malloc(n_colunas * sizeof(int *));

    for (int i = 0; i < n_colunas; i++)
        nmatriz->valor[i] = (int *)malloc(n_linhas * sizeof(int));

    return nmatriz;
}

int DeltaC_valor_celula_matriz(matriz *matriz, int n_colunas, int n_linhas)
{
    return matriz->valor[n_linhas][n_colunas];
}

void DeltaC_destruir_matriz(matriz *matriz)
{
    int i, n = matriz->colunas;
    for (i = n - 1; i >= 0; i--)
        free(matriz->valor[i]);
    free(matriz->valor);
    free(matriz);
    return;
}

void DeltaC_impimir_matriz(matriz *matriz)
{
    int i, j;
    for (j = 0; j < matriz->linhas; j++)
    {
        for (i = 0; i < matriz->colunas; i++)
        {
            printf("%d ", matriz->valor[j][i]);
        }
        printf("\n");
    }
    return;
}