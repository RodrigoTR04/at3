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
  int a,vetor[MAX_ARR];
  a = le_vetor(vetor);
  quicksort(vetor,a,0,a-1);
  return 0;
}

void quicksort(int vetor[MAX_ARR], int tam_vetor, int comeco, int fim) {
  int j;
  printf(">> Quicksort(começo = %i, fim = %i). Vetor = ",comeco,fim);
  exibe_vetor(vetor,tam_vetor);
  printf("\n");
  if(comeco<fim){
    
    j = particiona(vetor,comeco,fim);

    quicksort(vetor,tam_vetor,comeco,j-1);
    quicksort(vetor,tam_vetor,j+1,fim);
  }
  printf("** Quicksort(começo = %i, fim = %i). Vetor = ",comeco,fim);
  exibe_vetor(vetor,tam_vetor);
  printf("\n");
  
}

int particiona(int vetor[MAX_ARR], int comeco, int fim) {
  int pivo,i,j;
  pivo = (comeco+fim)/2;
  troca_elementos(vetor,pivo,fim);
  j = comeco;
  for(i=comeco;i<fim;i++){
    if(vetor[i]<=vetor[fim]){
      troca_elementos(vetor,i,j);
      j++;
    }
  }
  troca_elementos(vetor,j,fim);
  return j;
}

void troca_elementos(int vetor[MAX_ARR], int i, int j) {
  int aux;
  aux = vetor[i];
  vetor[i] = vetor[j];
  vetor[j] = aux;
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
  int i, a;
  printf("Digite os valores do vetor: ");
  for(i=0;i<MAX_ARR;i++){
    scanf("%i",&a);
    if(a==-100||i==MAX_ARR){
      break;
    } 
    vetor[i] = a;
  }
  
  return i;
}
