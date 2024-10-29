#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    for (int i = 1; i <= 5; i++) {
        printf("Digite um valor: \n");
        scanf("%d", &valor);
        if (valor%2 != 0) {
            soma = soma + valor;
        }
    }
    printf("Soma: %d", soma);
}
