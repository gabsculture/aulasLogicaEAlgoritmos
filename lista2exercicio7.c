#include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (valor >= 2) {
        int cedulas = valor / 2;
        printf("O valor pode ser dividido em %d cedulas de 2 reais", cedulas);
    } else {
        printf("O valor nao pode ser divido em cedulas, pois eh menor que o menor valor de cedula do real (2)");
    }
}
