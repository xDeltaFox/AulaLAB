//
// Created by xDeltaFox on 29/05/25.
//

#ifndef LAB02_H
#define LAB02_H

typedef struct prod
{
    char misc[51];
    float preco;
} TPROD;

void ordena_a(TPROD **vet, int n);
void ordena_b(TPROD *vet, int n);
void ordena_c(TPROD **vet, int n);
void ordena_d(TPROD *vet, int n);

#endif // LAB02_H
