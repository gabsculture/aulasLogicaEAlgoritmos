#include <stdio.h>

int main() {
    int dias;

    printf("Digite a quantidade de dias para converter:\n");
    scanf("%d", &dias);

    float ano = dias/365;
    float semanas = dias/7;

    printf("Em anos: %2.f\n", ano);
    printf("Em semanas: %2.f", semanas);
    printf("Em dias: %d", dias);
}
