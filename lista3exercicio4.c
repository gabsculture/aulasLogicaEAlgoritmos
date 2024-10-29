#include <stdio.h>

int main() {
    float notas[5];
    int pesos[5];
    float produtos[5];
    float somatorioProdutos = 0.0;
    float somatorioPesos = 0.0;
    float media;
    printf("Digite as 4 notas do aluno, todas de 0 a 100: ");
    for (int i = 1; i < 5; i++) {
        scanf("%f", &notas[i]);
        if(notas[i] > 100 || notas[i] < 0) {
            printf("Digite uma nota válida (0 a 100) ");
            scanf("%f", &notas[i]);
        } 
    }
    
    printf("Digite os pesos, respectivamente:");
    for (int i = 1; i < 5; i++) {
        scanf("%d", &pesos[i]);
    }

    for (int i = 1; i < 5; i++) {
        produtos[i] = notas[i] * pesos[i];
        somatorioProdutos += produtos[i];
        somatorioPesos += pesos[i];
        media = somatorioProdutos / somatorioPesos;
    }
    printf("Media: %.2f\n", media);
}
