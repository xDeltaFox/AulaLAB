//
// Created by xDeltaFox on 29/05/25.
//

#include <stdio.h>
#include <string.h>

#include "./lab02.h"

int compara_prod_a(TPROD *a, TPROD *b)
{
    int nome = strncmp(a->misc + 8, b->misc + 8, 42);
    if (nome != 0)
        return nome;

    int data = strncmp(a->misc, b->misc, 8);
    if (data != 0)
        return data;

    if (a->preco < b->preco)
        return 1;
    if (a->preco > b->preco)
        return -1;

    return 0;
}

void ordena_a(TPROD **vet, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (compara_prod_a(vet[j], vet[j + 1]) > 0)
            {
                TPROD *tmp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = tmp;
            }
        }
    }
}