#include <stdio.h>
#include <string.h>

typedef struct {
    char marca[100];
    char modelo[100];
    int anoFabricacao;
    int anoModelo;
} Carro;

Carro setCarro(char marca[], char modelo[], int anoFabricacao, int anoModelo) {
    Carro carro;
    strcpy(carro.marca, marca);
    strcpy(carro.modelo, modelo);
    carro.anoFabricacao = anoFabricacao;
    carro.anoModelo = anoModelo;
    return carro;
}

Carro retornaCarroAntigo(Carro carros[]) {
    int anoInicial = 2025;
    Carro carroVelho = carros[0];
    for(int i = 0; i < 3; i++) {
        if(carros[i].anoFabricacao < anoInicial && carros[i].anoFabricacao <= carroVelho.anoFabricacao) {
            carroVelho = carros[i];
            }
        }
    return carroVelho;
}

void imprimeCarroAntigo(Carro carroVelho) {
    printf("Marca: %s\n", carroVelho.marca);
    printf("Modelo: %s\n", carroVelho.modelo);
    printf("Ano de fabricacao: %d\n", carroVelho.anoFabricacao);
    printf("Ano modelo: %d\n", carroVelho.anoModelo);
}

int main(void) {
    Carro gol = setCarro("volkswagen", "gol", 2004, 2005);
    Carro uno = setCarro("fiat", "uno", 2004, 2003);
    Carro fusca = setCarro("volkswagen", "fusca", 1979, 1978);
    Carro carros[3] = {gol, uno, fusca};
    Carro carroVelho = retornaCarroAntigo(carros);
    imprimeCarroAntigo(carroVelho);
}
