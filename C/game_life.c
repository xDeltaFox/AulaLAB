#include <stdio.h>
#include <stdlib.h>

#include "./game_life.h"

void imprimirMatriz(int matriz[LINHAS][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf(matriz[i][j] ? "O" : ".");
        }
        printf("\n");
    }
    printf("\n");
}

int contarVizinhos(int matriz[LINHAS][COLUNAS], int x, int y)
{
    int vizinhos = 0;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            if (i == 0 && j == 0)
                continue;
            int ni = x + i;
            int nj = y + j;
            if (ni >= 0 && ni < LINHAS && nj >= 0 && nj < COLUNAS)
            {
                vizinhos += matriz[ni][nj];
            }
        }
    }
    return vizinhos;
}

void proximaGeracao(int atual[LINHAS][COLUNAS], int nova[LINHAS][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            int vivos = contarVizinhos(atual, i, j);
            if (atual[i][j])
            {
                nova[i][j] = (vivos == 2 || vivos == 3);
            }
            else
            {
                nova[i][j] = (vivos == 3);
            }
        }
    }
}

void copiarMatriz(int origem[LINHAS][COLUNAS], int destino[LINHAS][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            destino[i][j] = origem[i][j];
        }
    }
}

void iniciaMatriz(int atual[LINHAS][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            atual[i][j] = rand() % 2;
        }
    }
}
