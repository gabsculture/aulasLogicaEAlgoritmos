#include <stdio.h>

int main() {
    int ano;
    printf("Insira o ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0) {
        printf("O ano eh bissexto!");
    } else {
        printf("O ano nao eh bissexto!");
    }
}

