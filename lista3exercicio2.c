#include <stdio.h>

int main() {
    int linhas = 5;
    int colunas;

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);
    int matrizA[linhas][colunas];
    int matrizB[linhas][colunas];

    printf("Digite os valores da Matriz A:");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("Digite os valores de Matriz B:");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matrizB[i][j]);
        }
    }

    int matrizSoma[linhas][colunas];

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }
}
