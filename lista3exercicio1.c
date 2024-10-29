#include <stdio.h>

int main() {
    int numeros[50];
    int i = 0;
  
    printf("Insira os numeros inteiros (digite -1 para parar)\n");

    for (i = 0; i < 50; i++) {
        scanf(" %d", &numeros[i]);
        if (numeros[i] == -1) {
            break;
        }
    }
  
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", numeros[j]);
    }
}
