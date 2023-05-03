#include <stdio.h>
#include <stdbool.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

bool estaOrdenado(int array[], int quantidade) {
  for (int i = 1; i < quantidade; i++) {
    if (array[i - 1] > array[i]) {
      return false;
    }
  }
  return true;
}

void bogoSort(int array[], int quantidade) {
  while (!estaOrdenado(array, quantidade)) {
    for (int i = 0; i < quantidade; i++) {
      int j = i + rand() % (quantidade - i);
      trocar(&array[i], &array[j]);
    }
  }
}

int buscaBinaria(int array[], int quantidade, int valor) {
  int inicio = 0;
  int fim = quantidade - 1;

  while (inicio <= fim) {
    int meio = (inicio + fim) / 2;

    if (array[meio] == valor) {
      return meio;
    } else if (array[meio] < valor) {
      inicio = meio + 1;
    } else {
      fim = meio - 1;
    }
  }

  return -1;
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int conteudos[quantidade];
  for (int i = 0; i < quantidade; i++) {
    scanf("%d", &conteudos[i]);
  }

  // Ordena os conteúdos usando Bogo Sort
  bogoSort(conteudos, quantidade);

  int index = buscaBinaria(conteudos, quantidade, 777);

  if (index != -1) {
    printf("S");
  } else {
    printf("N");
  }

  return 0;
}
