#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
  // TODO: Implemente a lógica para inverter a "palavra".
  int str_inicial, str_final;
  char temp;
  
  // Define os índices "i" e "j" para inverter as letras da palavra.
  str_inicial = 0;
  str_final = strlen(palavra) - 1;

  // Enquanto "i" for menor que "j", troca as letras correspondentes.
  while (str_inicial < str_final) {
    temp = palavra[str_inicial];
    palavra[str_inicial] = palavra[str_final];
    palavra[str_final] = temp;
    str_inicial++;
    str_final--;
  }
}

int main() {
  char palavra[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", palavra);

  // Chama a função que inverte a palavra.
  inverter(palavra);

  // Imprime a palavra invertida na tela.
  printf("%s", palavra);

  return 0;
}