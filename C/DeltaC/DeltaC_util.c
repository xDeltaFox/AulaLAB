#include <stdio.h>
#include <stdlib.h>

#include "./DeltaC_util.h"

dois_numeros *DeltaC_pedir_dois_numeros()
{
    int a, b;

    printf("Digite dois numeros:");

    scanf("%d %d", &a, &b);

    dois_numeros *resultado = (dois_numeros *)malloc(sizeof(dois_numeros));

    resultado->a = a;
    resultado->b = b;

    return resultado;
}