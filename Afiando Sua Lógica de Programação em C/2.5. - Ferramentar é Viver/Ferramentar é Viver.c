#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // TODO: Crie as condições de acordo com as saídas deste desafio.
  //Condicional Composta
  if(temperatura >= 26){
      printf("\nAlta");
  }else if(temperatura == 20){
        printf("\nIdeal");
  }else if(temperatura <= 15){
      printf("\nBaixa");
  }else{
      printf("\nTemperatura indefinida");
  }  
  
  return 0;
}