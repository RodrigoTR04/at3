#include <stdio.h>

#define MAX_ARR 1024 // Não modifique esse valor!!

/* 
 * Protótipos das funções - NÃO MODIFIQUE 
 *
 */

// le_vetor deve ler um vetor até receber o valor -100 ou chegar em MAX_ARR.
// O retorno da função deve ser o tamanho do vetor lido.
int le_vetor(int vetor[MAX_ARR]);

// troca_elementos deve receber um vetor e dois índices e trocar os troca 
// os elementos do vetor de lugar.
void troca_elementos(int vetor[MAX_ARR], int i, int j);

// particiona deve receber um vetor, o começo e o fim do intervalo a ser
// considerado. A seguir, deve reposicionar um pivô (valor médio do intervalo)
// de forma que à sua esquerda estejam apenas valores menores que ele e, à sua
// direita, apenas valores maiores que ele. Retorna a posição final do pivô.
int particiona(int vetor[MAX_ARR], int comeco, int fim);

// quicksort deve receber como parâmetros um vetor, seu tamanho, o começo e 
// o fim do intervalo a ser considerado no vetor. O procedimento deve
// implementar o algoritmo quicksort recursivo e exibir os resultados de cada
// uma de suas chamadas.
void quicksort(int vetor[MAX_ARR], int tam_vetor, int comeco, int fim);

// Ganharam essa de brinde. =)
void exibe_vetor(int vetor[MAX_ARR], int tam_vetor);

int main (int argc, char *argv[])
{

  return 0;
}

void quicksort(int vetor[MAX_ARR], int tam_vetor, int comeco, int fim) {
}

int particiona(int vetor[MAX_ARR], int comeco, int fim) {
}

void troca_elementos(int vetor[MAX_ARR], int i, int j) {
}

void exibe_vetor(int vetor[MAX_ARR], int tam_vetor) {
  printf("[");
  for (int i = 0; i < tam_vetor; i++) {
    printf("%i", vetor[i]);
    if ( i < tam_vetor - 1 ) printf(", ");
  }
  printf("]\n");
}

int le_vetor(int vetor[MAX_ARR]) {
}
