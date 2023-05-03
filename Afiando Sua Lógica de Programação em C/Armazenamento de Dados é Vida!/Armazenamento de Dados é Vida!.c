#include <stdio.h>

int main() {
    int capacidadeAtual, aumentoPercentual;

    // Lê as entradas do usuário
    scanf("%d %d", &capacidadeAtual, &aumentoPercentual);

    // TODO: Declare e calcule a nova capacidade do disco de Mithril.    
    aumentoPercentual =  aumentoPercentual * capacidadeAtual / 100;
    float capacidadeNova = capacidadeAtual + aumentoPercentual;

    // TODO: Imprima a nova capacidade.
    printf("%.f", capacidadeNova);



    return 0;
}