#include <stdio.h>

int main() {
    float produtosPreço[6] = {0, 5.00, 2.00, 1.00, 3.50, 5.50};
    int produtosEstoque[6] = {0, 100, 200, 300, 400, 500};
    int produtosVendidos[6] = {0, 100, 20, 150, 200, 300};
    int produtosTotal[6];
    float lucroProdutos[6];
    float lucroTotal = 0;

    int i;

    for (i = 1; i < 6; i++) {
        printf("ID: %d PRECO: %.2f EM ESTOQUE: %d \n", i, produtosPreço[i], produtosEstoque[i]);
    }

    for (i = 1; i < 6; i++) {
        produtosTotal[i] = produtosEstoque[i] - produtosVendidos[i];
    }
    for (i = 1; i < 6; i++) {
        printf("ID: %d TOTAL DE PRODUTOS NO FIM DO DIA: %d\n", i, produtosTotal[i]);
    }

    for (i = 1; i < 6; i++) {
        lucroProdutos[i] = produtosPreço[i] * produtosVendidos[i];
    }

    printf("TOTAL DE LUCRO COM AS MERCADORIAS:\n");
    for (i = 1; i < 6; i++) {
        printf("ID: %d LUCRO: %2.f \n", i, lucroProdutos[i]);
        lucroTotal = lucroTotal + lucroProdutos[i];
    }
    printf("LUCRO TOTAL: %2.f", lucroTotal);

}
