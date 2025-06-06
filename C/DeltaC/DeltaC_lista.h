#ifndef DeltaC_lista_h_
#define DeltaC_lista_h_

#include <stdbool.h>

// struct
typedef struct lista
{
    int value;
    struct lista *prox;
} LISTA;

// functions
bool DeltaC_add(int item, LISTA *p);
void DeltaC_find();
void DeltaC_clear();
void DeltaC_remove();

#endif