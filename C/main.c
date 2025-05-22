#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para sleep()
#include <time.h>

#include "./DeltaC/console.h"
#include "./math.h"
#include "./game_life.h"
#include "./carry.h"

int a, b;

int escolher_opcao()
{
    int op;
    scanf("%d", &op);

    if (op > 0 && op <= 10)
    {
        return op;
    }

    DeltaC_print("Opção invalida");
    escolher_opcao();
}

int main()
{
    // init
    srand(time(NULL));

    DeltaC_print("Bem-vindo");
    int Eop = escolher_opcao();

    // // Carry
    // int a = 123, b = 593;
    // printf("Numero de carry: %d\n", contar_carry(a, b));

    // a = 128;
    // b = 593;
    // printf("Numero de carry: %d\n", contar_carry(a, b));

    // // Conway's Game of Life
    // int atual[LINHAS][COLUNAS] = {0};
    // int nova[LINHAS][COLUNAS] = {0};

    // iniciaMatriz(atual);

    // for (int geracao = 0; geracao < GERAÇÕES; geracao++)
    // {
    //     printf("Geração %d:\n", geracao);
    //     imprimirMatriz(atual);
    //     proximaGeracao(atual, nova);
    //     copiarMatriz(nova, atual);
    //     sleep(2);
    // }

    // // MDC :)
    // printf("Digite dois numeros:");

    // scanf("%d %d", &a, &b);

    // printf("O MDC de %d e %d é %d", a, b, mdc(a, b));

    // printf("\n\n");

    return 0; // Fim da linha X
}
