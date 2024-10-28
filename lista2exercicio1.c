#include <stdio.h>

int main() {
    float base = 0;
    float altura = 0;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    float perimetro = 2 * (base + altura);
    float area = base * altura;

    printf("Area do retangulo: %f\n", area);
    printf("Perimetro do retangulo: %f\n", perimetro);
}
