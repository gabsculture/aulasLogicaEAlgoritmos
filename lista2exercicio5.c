#include <stdio.h>

int main() {
    int valor = 0;
    int maiorValor = 0;
    for(int i = 1; i <=3; i++) {
        printf("Digite um numero: \n");
        scanf("%d", &valor);
        if(valor > maiorValor) {
            maiorValor = valor;
        }
    }
    printf("Maior numero: %d", maiorValor);
}
