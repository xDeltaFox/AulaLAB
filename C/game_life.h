#ifndef game_life_h_
#define game_life_h_

#define LINHAS 10
#define COLUNAS 30
#define GERAÇÕES 100

void imprimirMatriz(int matriz[LINHAS][COLUNAS]);

int contarVizinhos(int matriz[LINHAS][COLUNAS], int x, int y);

void proximaGeracao(int atual[LINHAS][COLUNAS], int nova[LINHAS][COLUNAS]);

void copiarMatriz(int origem[LINHAS][COLUNAS], int destino[LINHAS][COLUNAS]);

void iniciaMatriz(int atual[LINHAS][COLUNAS]);

#endif