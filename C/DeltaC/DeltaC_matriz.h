
typedef struct matriz
{
    int **valor;
    int linhas, colunas;
} matriz;

matriz *DeltaC_criar_mariz(int n_colunas, int n_linhas);
void DeltaC_destruir_matriz(matriz *matriz);
void DeltaC_impimir_matriz(matriz *matriz);