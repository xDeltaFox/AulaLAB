#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para sleep()
#include <time.h>
#include <string.h>

#include "./DeltaC/DeltaC_console.h"
#include "./DeltaC/DeltaC_util.h"
#include "./DeltaC/Window/DeltaC_Window_Init.h"
#include "./DeltaC/DeltaC_files.h"
#include "./DeltaC/DeltaC_string.h"

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
    DeltaC_print("Bem-vindo a lista de exercicios da diciplina de Programação Estruturada :)");
#ifdef __CYGWIN__
    DeltaC_print("Aviso: Este programa foi feito pensado em Linux <3");
    DeltaC_print("Aviso: Fora disso, não moverei um musculo para resolver problemas.");
    DeltaC_print("Aviso: Principalmente, se envolver o Ruindows.");
#endif
    DeltaC_print("Pressione ENTER para continuar...");
    system("read");

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
        // A 'main' está diferente porque eu quis automatizar a inserção de dados através de arqivo.
        // Tava com preguiça de digitar tudo na mão sempre que iniciar o programa.
        FILE *fl = DeltaC_openfile("./C/recursos/lista_ordena_lab02.txt", "r");
        int lines = DeltaC_get_lines_file(fl);
        // As linhas são lidas e contadas corretamente mas o arquivo é totalmente lido por usar 'fgetc'.
        // Por isso sou obrigado a fechar o arquivo e abri-lo novamente.
        // Ou o 'fgets' não vai encontrar nenhuma linha para ser lida e só vai pular o while.
        // Só foi possível eu descobrir isso através do debbuger do vscode.
        fclose(fl);
        fl = DeltaC_openfile("./C/recursos/lista_ordena_lab02.txt", "r");

        TPROD **vet = (TPROD **)malloc(sizeof(TPROD *) * lines);
        char line[256]; // Espero que "256" seja suficiente
        int i = 0;
        while (fgets(line, sizeof(line), fl)) // Lendo o arquivo linha a linha
        {
            // Separando a string no espaço em branco
            int whitespace = DeltaC_get_white_space_string(line);
            char fmisc[51] = "";
            char ftmp[6];

            // Copiando os dados para suas váriaveis
            memcpy(fmisc, &line[0], whitespace - 1);
            memcpy(ftmp, &line[whitespace], 6);

            // Convertendo string para double que por sua vez converte para float (mesmo não tendo necessidade)
            float fpreco = (float)strtod(ftmp, NULL);
            DeltaC_print("Criando um novo produto...");
            printf("%s %.2f\n", fmisc, fpreco);
            vet[i] = (TPROD *)malloc(sizeof(TPROD));
            strcpy(vet[i]->misc, fmisc);
            memcpy(&vet[i]->preco, &fpreco, 4);

            i++;
        }

        DeltaC_print("Ordenando...");
        ordena_a(vet, lines);
        DeltaC_print("Concluido!");

        for (int i = 0; i < lines; i++)
        {
            printf("%s\t%.2f\n", vet[i]->misc, vet[i]->preco);
            free(vet[i]);
        }
        free(vet);
        fclose(fl);
        break;
    case 8:

        break;
    default:
        break;
    }

    return 0; // Fim da linha X
}
