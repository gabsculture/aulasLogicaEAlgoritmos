#include <math.h>
#include <stdio.h>

int main() {
    int x1, x2, y1, y2;

    printf("Insira os valores dos pontos:\n");
    printf("x1: ");
    scanf("%d", &x1);
    printf("\n y1: ");
    scanf("%d", &y1);
    printf("\n x2: ");
    scanf("%d", &x2);
    printf("\n y2: ");
    scanf("%d", &y2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\n distancia = %2.f", distancia);
}
