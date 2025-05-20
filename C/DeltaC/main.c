#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // Para sleep()
#include <time.h>

#define LINHAS 10
#define COLUNAS 30
#define GERAÇÕES 100

int contar_carry_aux(int a, int b, int carry) {
    if (a == 0 && b == 0 && carry == 0)
        return 0;

    int dig_a = a % 10;
    int dig_b = b % 10;

    int soma = dig_a + dig_b + carry;

    if (soma >= 10)
        return 1 + contar_carry_aux(a / 10, b / 10, 1);
    else
        return contar_carry_aux(a / 10, b / 10, 0);
}

int contar_carry(int a, int b) {
    return contar_carry_aux(a, b, 0);
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf(matriz[i][j] ? "O" : ".");
        }
        printf("\n");
    }
}

int contarVizinhos(int matriz[LINHAS][COLUNAS], int x, int y) {
    int vizinhos = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue; // Ignora a própria célula
            int ni = x + i;
            int nj = y + j;
            if (ni >= 0 && ni < LINHAS && nj >= 0 && nj < COLUNAS) {
                vizinhos += matriz[ni][nj];
            }
        }
    }
    return vizinhos;
}

void proximaGeracao(int atual[LINHAS][COLUNAS], int nova[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            int vivos = contarVizinhos(atual, i, j);
            if (atual[i][j]) {
                nova[i][j] = (vivos == 2 || vivos == 3);
            } else {
                nova[i][j] = (vivos == 3);
            }
        }
    }
}

void copiarMatriz(int origem[LINHAS][COLUNAS], int destino[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            destino[i][j] = origem[i][j];
        }
    }
}

void iniciaMatriz(int atual[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            atual[i][j] = rand() % 2;
        }
    }
}

int main(void) {
    srand(time(NULL));

    int a = 123, b = 593;
    printf("Numero de carry: %d\n", contar_carry(a, b));

    a = 128;
    b = 593;
    printf("Numero de carry: %d\n", contar_carry(a, b));

    int atual[LINHAS][COLUNAS] = {0};
    int nova[LINHAS][COLUNAS] = {0};

    iniciaMatriz(atual);

    for (int geracao = 0; geracao < GERAÇÕES; geracao++) {
        printf("Geração %d:\n", geracao);
        imprimirMatriz(atual);
        proximaGeracao(atual, nova);
        copiarMatriz(nova, atual);
        sleep(2);
    }

    return 0;
}