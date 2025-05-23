#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para sleep()
#include <time.h>

#include "./DeltaC/console.h"
#include "./exercicios/lista01.h"
#include "./exercicios/lab01.h"
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

    // Organizar essa lista em ordem de lançamento (faltou uma palavra melhor ;-;)
    // P1 vai depois da lista 07
    DeltaC_print("Bem-vindo a lista de exercicios :)");
    DeltaC_print("Escolha uma das opções a seguir:");
    DeltaC_print("1 - (P1) Carry");
    DeltaC_print("2 - (P1) Conway's Game of Life");
    DeltaC_print("3 - MDC");
    DeltaC_print("5 - (Lista 01) Todos os primos de um n inteiro");

    int Eop = escolher_opcao();

    switch (Eop)
    {
    case 1:
        // Carry
        int a = 123, b = 593;
        printf("Numero de carry: %d\n", contar_carry(a, b));

        a = 128;
        b = 593;
        printf("Numero de carry: %d\n", contar_carry(a, b));
        break;
    case 2:
        // Conway's Game of Life
        int atual[LINHAS][COLUNAS] = {0};
        int nova[LINHAS][COLUNAS] = {0};

        DeltaC_print("** Conway's Game of Life **");
        DeltaC_print("!! A geração está configurada para ocorrer a cada 2 segundos. !!");
        DeltaC_print("Pressione ENTER para continuar...");
        system("read");
        DeltaC_print("Iniciando...");

        iniciaMatriz(atual);

        for (int geracao = 0; geracao < GERAÇÕES; geracao++)
        {
            printf("Geração %d:\n", geracao);
            imprimirMatriz(atual);
            proximaGeracao(atual, nova);
            copiarMatriz(nova, atual);
            sleep(2);
        }
        break;
    case 3:
        // MDC :)
        printf("Digite dois numeros:");

        scanf("%d %d", &a, &b);

        printf("O MDC de %d e %d é %d", a, b, mdc(a, b));

        printf("\n\n");
        break;
    case 4:
        /////////////////////////////////////
        char str[] = "abcdefg";
        int k = 4;

        k_str(str, k);
        //////////////////////////////////
        break;
    case 5:
        ///////////////////////////
        char str2[] = "amoR";

        ordena(str2);

        printf("%s\n", str2);
        //////////////////////////////
        break;
    case 6:
        ////////////////////////////////////////
        // todos os primos de um n inteiro
        int n;

        while (1)
        {
            printf("Digite um número (n): ");
            scanf("%d", &n);

            if (n <= 0)
            {
                printf("Encerrando o programa.\n");
                break;
            }

            int contador = 0;
            int numero = 2;

            printf("Os %d primeiros números primos são:\n", n);
            while (contador < n)
            {
                if (n_primos(numero))
                {
                    printf("%d ", numero);
                    contador++;
                }
                numero++;
            }
            printf("\n");
        }
        ////////////////////////////////////////////////
        break;
    case 7:

        break;
    case 8:

        break;
    default:
        break;
    }

    return 0; // Fim da linha X
}
