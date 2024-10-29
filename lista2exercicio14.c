#include <stdio.h>

int main() {
    char letra;
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};
    printf("Escolha uma letra: ");
    scanf("%c", &letra);

    for (int i = 0; i < (sizeof(vogais) / sizeof(vogais[0])); i++) {
        if(letra == vogais[i]) {
            printf("Eh uma vogal");
            break;
        } else {
            printf("Eh consoante");
            break;
        }
    }
}
