#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int consumo1, consumo2, consumo3;
    float media;

    // Lendo os valores de consumo das três máquinas
    printf("Digite o consumo enérgetico das três máquinas separados por espaço: \n");
    scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

    //TODO: Calcule a média de consumo e a imprima com duas casas decimais.
    media = (consumo1+consumo2+consumo3)/3;

    printf("A média de consumo enérgetico das três máquinas é: %.2f", media);

    return 0;
}