#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "./DeltaC_lista.h"

bool DeltaC_add(int item, LISTA *p)
{
    LISTA *novo = (LISTA *)malloc(sizeof(LISTA));

    if (!novo)
    {
        return false;
    }

    novo->value = item;
    novo->prox = p->prox;
    p->prox = novo;

    return true;
}