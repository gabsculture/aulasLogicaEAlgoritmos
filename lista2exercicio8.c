#include <stdio.h>

int main() {
    int valor;
    printf("Digite um numero: ");
    scanf("%d", &valor);

    int horas = valor/3600;
    int minutos = valor%3600/60;
    int segundos = valor%3600%60;

    printf("O valor em horas: %d", horas);
    printf("O valor em minutos: %d", minutos);
    printf("O valor em segundos: %d", segundos);
}
