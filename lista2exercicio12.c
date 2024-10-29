#include <stdio.h>

int main() {
    int valor;
    int numerosPositivos = 0;
    int soma = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        if (valor > 0) {
            soma = soma + valor;
            numerosPositivos++;
        }
    }
    int media = soma / numerosPositivos;
    printf("Numeros positivos: %d", numerosPositivos);
    printf("Media: %d", media);
}
