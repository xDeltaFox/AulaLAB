#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para sleep()
#include <time.h>

#include "./DeltaC/DeltaC_console.h"
#include "./DeltaC/DeltaC_util.h"
#include "./DeltaC/Window/DeltaC_Window_Init.h"
#include "./DeltaC/DeltaC_files.h"

#include "./exercicios/lista01.h"
#include "./exercicios/lab01.h"
#include "./exercicios/lab02.h"
#include "./exercicios/P1/game_life.h"
#include "./exercicios/P1/carry.h"

#include "./math.h"

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
    DeltaC_print("6 - (Lista 01) Todos os primos de um n inteiro");
    DeltaC_print("7 - (Lab 02) Ordenação de uma lista de produtos");

    switch (escolher_opcao())
    {
    case 1:
        // Carry
        dois_numeros *Carry_tery = NULL;
        Carry_tery = DeltaC_pedir_dois_numeros();

        printf("Numero de carry: %d\n", contar_carry(Carry_tery->a, Carry_tery->b));
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
        dois_numeros *MDC_tery = NULL;
        MDC_tery = DeltaC_pedir_dois_numeros();

        printf("O MDC de %d e %d é %d", MDC_tery->a, MDC_tery->b, mdc(MDC_tery->a, MDC_tery->b));

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
        int n1;

        while (1)
        {
            printf("Digite um número (n): ");
            scanf("%d", &n1);

            if (n1 <= 0)
            {
                printf("Encerrando o programa.\n");
                break;
            }

            int contador = 0;
            int numero = 2;

            printf("Os %d primeiros números primos são:\n", n1);
            while (contador < n1)
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
        FILE *fl = openfile("./C/build/lista.txt", "r");
        char fmisc[51];
        float fpreco;
        int rl = fscanf(fl, "%s %f", fmisc, &fpreco);

        int lines = 0;
        int ch;

        while ((ch = fgetc(fl)) != EOF)
        {
            if (ch == '\n')
            {
                lines++;
            }
        }
        printf("%d\n", lines);

        // TPROD **vet = (TPROD **)malloc(sizeof(TPROD *) * lines);
        int i;
        printf("%d\n", rl);
        while (rl == 2)
        {
            // vet[i] = (TPROD *)malloc(sizeof(TPROD));
            DeltaC_print("Criando um novo produto...");
            printf("%s %f\n", fmisc, fpreco);

            i++;
            rl = fscanf(fl, "%s %f", fmisc, &fpreco);
        }
        printf("%d\n", rl);

        fclose(fl);

        // int n43;
        // do
        // {
        //     DeltaC_print("Qual vai ser o tamanho da sua lista?");
        //     scanf("%d", &n43);
        //     if (n43 > 0)
        //         break;
        // } while (1);

        // int i;
        // for (i = 0; i < n43; i++)
        // {
        //     TPROD **vet = (TPROD **)malloc(sizeof(TPROD *) * n43);
        //     vet[i] = (TPROD *)malloc(sizeof(TPROD));
        //     DeltaC_print("Criando um novo produto...");
        //     DeltaC_print("Digite uma data (ddmmaaaa) e um nome:");
        //     scanf(" %50[^\n]", vet[i]->misc);
        //     DeltaC_print("Qual o pço desse produto?");
        //     scanf("%f", &vet[i]->preco);
        // }
        // DeltaC_print("Ordenando...");
        // ordena_a(vet, n43);
        // DeltaC_print("Concluido!");
        // for (i = 0; i < n43; i++)
        // {
        //     printf("%s\t%f\n", vet[i]->misc, vet[i]->preco);
        //     free(vet[i]);
        // }
        // free(vet);
        break;
    case 8:

        break;
    default:
        break;
    }

    return 0; // Fim da linha X
}
