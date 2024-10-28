#include <stdio.h>

int main() {
    int id, horasTrabalhadas, valorPorHora;
    printf("Digite seu numero de identificacao:\n");
    scanf("%d", &id);

    printf("Digite a quantidade de horas trabalhadas: \n");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o valor recebido por hora: \n");
    scanf("%d", &valorPorHora);

    float salario = valorPorHora * horasTrabalhadas;

    printf("Identificacao: %d\n", id);
    printf("Salario: %.2f\n", salario);
}
