#include <stdio.h>

int main() {
    int p, q, r, s;

    printf("Digite o valor de p, sendo que o valor deve ser par:\n");
    scanf("%d", &p);
    if (p % 2 != 0) {
        printf("O valor não é par, insira novamente");
        scanf("%d", &p);
    }

    printf("Digite o valor de q, r e r respectivamente, sendo que o valor deve ser positivo:\n");
    scanf("%d %d %d", &q, &r, &s);
    if (q < 0 || r < 0 || s < 0) {
        printf("O valor não é positivo, insira novamente");
        scanf("%d %d %d", &q, &r, &s);


        int somars = r + s;
        int somapq = p + q;

        if (q > r && s > p && somars > somapq) {
            printf("Valores corretos!");
        } else {
            printf("Valores errados!");
        }
    }
