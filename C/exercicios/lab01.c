#include <stdio.h>
#include <string.h>

#include "./lab01.h"

void k_str(char *str, int k)
{
    static char prefix[100]; // buffer para montar a substring
    static int level = 0;    // nível da recursão (posição atual)
    static int len = 0;      // tamanho da string original

    // Inicialização na primeira chamada
    if (level == 0)
        len = strlen(str);

    // Caso base: se a substring atingir tamanho k, imprime
    if (level == k)
    {
        prefix[level] = '\0';
        printf("%s\n", prefix);
        return;
    }

    for (int i = 0; i < len; i++)
    {
        prefix[level] = str[i];
        level++;
        k_str(str, k);
        level--;
    }
}

int *ins_antes_depois_x(int *vet, int n, int x, int *tam_vet_resposta);

void ordena(char *str)
{
    int trocou = 0;

    for (int i = 0; i < (strlen(str) - 1); i++)
    {
        if (str[i] > str[i + 1])
        {
            char temp = str[i];

            str[i] = str[i + 1];
            str[i + 1] = temp;

            trocou = 1;
        }
    }

    if (trocou)
        ordena(str);
}

void retira_mult_k(int *vet, int *novo_tam_vet, int k);

void ordena_turma(char **turma, int n);
