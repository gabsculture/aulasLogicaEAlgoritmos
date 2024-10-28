#include <stdio.h>

int main() {
    float PI = 3.14159;
    float raio = 0;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    float perimetro = 2 * PI * raio;
    float area = PI * (raio * raio);

    printf("Area do circulo: %f\n", area);
    printf("Perimetro do circulo: %f\n", perimetro);
}
