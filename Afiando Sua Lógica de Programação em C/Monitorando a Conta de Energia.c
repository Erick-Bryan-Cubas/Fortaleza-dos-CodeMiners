#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int consumo1, consumo2, consumo3;
    float media;

    // Lendo os valores de consumo das tr�s m�quinas
    printf("Digite o consumo en�rgetico das tr�s m�quinas separados por espa�o: \n");
    scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

    //TODO: Calcule a m�dia de consumo e a imprima com duas casas decimais.
    media = (consumo1+consumo2+consumo3)/3;

    printf("A m�dia de consumo en�rgetico das tr�s m�quinas �: %.2f", media);

    return 0;
}