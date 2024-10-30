/*
7. Crie um algoritmo que permita ao usuário informar o nome e o salário de vinte
funcionários e, em seguida, calcule e armazene um novo salário, reajustado 8%. Ao final,
exiba o nome dos funcionários, salários antigo e reajustado. Os nomes (apenas o primeiro
de cada funcionário) não pode ter mais de dez caracteres e o salário deve ser positivo.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[10];
    float salario[3];
    float salarioReajustado[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite seu nome: ");
        for (int i = 0; i < 10; i++) {
            scanf(" %c", &nome[i]);
        }
        printf("Digite seu salario: ");
        scanf("%f", &salario[i]);
    }
    for (int i = 0; i < 3; i++) {
        salarioReajustado[i] = salario[i] * 1.08;
    }
    for (int i = 0; i < 3; i++) {
        printf("ID: %d NOME: %s SALARIO ANTIGO: %2.f SALARIO ATUAL: %2.f \n", i, nome, salario[i], salarioReajustado[i]);
    }
}
