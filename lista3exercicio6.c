/*
Uma certa firma fez uma pesquisa de mercado para saber se as pessoas gostaram ou não
de um novo produto lançado no mercado. Para isso, forneceu o sexo do entrevistado (1 =
masculino e 2 = feminino) e sua resposta (1 = sim e 2 = não). Sabendo-se que foram
entrevistadas cinco pessoas, calcule e informe:
a. O número de pessoas que responderam “sim”;
b. O número de pessoas que responderam “não”;
c. O percentual de pessoas do sexo feminino que responderam “sim”;
d. O percentual de pessoas do sexo feminino que responderam “não”.
 */
#include <stdio.h>

int main() {
    int pesquisa[6][6];
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int contadorFemininos = 0;
    int contadorMasculinos = 0;

    printf("Genero: \n 1 - Masculino \n 2 - Feminino \n");
    printf("Gostou do novo produto? \n 1 - Sim \n 2 - Nao\n");
    printf("Digite os dados conforme a legenda, respectivamente(Genero, opiniao):\n");

    for (int i = 1; i < 6; i++) {
        for (int j = 1; j < 6; j++) {
            scanf("%d", &pesquisa[i][j]);
            if (pesquisa[i][j] == 1) {
                contadorPositivos++;
                contadorMasculinos++;
            } else if (pesquisa[i][j] == 2) {
                contadorNegativos++;
                contadorFemininos++;
            } else {
                printf("Valor invalido! Tente novamente;\n");
                return 0;
            }
        }
    }
    int porcentagemFemininos = ((contadorFemininos / 5)) / 5 * 100;
    int porcentagemMasculinos = ((contadorMasculinos / 5)) / 5 * 100;

    printf("Contador positivos: %d\n Contador negativos: %d \n", contadorPositivos / 5, contadorNegativos / 5);
    printf("Porcentagem feminina: %d %\n Porcentagem masculina: %d % \n", porcentagemFemininos, porcentagemMasculinos);
}
