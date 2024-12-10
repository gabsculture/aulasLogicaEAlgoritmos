/*
Escreva um programa que tenha uma struct com dados referentes a funcionários de
uma empresa, a estrutura deve conter o ID do funcionário, nome do funcionário, ganho
por hora e horas trabalhadas. Após elabore uma função que calcule o salário dos
funcionários e o imprima junto com as informações dos funcionários.
O programa deve armazenar as informações de 4 funcionários em um vetor
 */
#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float valorHora;
    int horasTrabalhadas;
} Funcionario;

Funcionario setFuncionario(int id, char nome[], float valor, int horasTrabalhadas) {
    Funcionario funcionario;
    funcionario.id = id;
    strcpy(funcionario.nome, nome);
    funcionario.valorHora = valor;
    funcionario.horasTrabalhadas = horasTrabalhadas;
    return funcionario;
}

float calculaSalario(Funcionario funcionarios[]) {
    float valorHora = 0;
    int horasTrabalhadas = 0;
    for(int i = 0; i < 4; i++) {
        valorHora += funcionarios[i].valorHora;
        horasTrabalhadas += funcionarios[i].horasTrabalhadas;
    }
    return valorHora * horasTrabalhadas;
}

void imprimeTotalSalario(float salarioTotal) {
    printf("Salario total: %.2f\n", salarioTotal);
}

int main(void) {
    Funcionario vanessa = setFuncionario(1, "Vanessa", 3.5, 1);
    Funcionario gabriela = setFuncionario(2, "Gabriela", 3.5, 1);
    Funcionario diogo = setFuncionario(3, "Diogo", 3.5, 1);
    Funcionario henry = setFuncionario(4, "Henry", 3.5, 1);
    Funcionario funcionarios[] = {vanessa, gabriela, diogo, henry};
    float salarioTotal = calculaSalario(funcionarios);
    imprimeTotalSalario(salarioTotal);
}
