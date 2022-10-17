#include <stdio.h>
#define MAX 100

int main() {
  int num, i, j, vezes;
  float seq[MAX];

  printf("Digite o numero de elementos da sequencia: ");
  scanf("%d", &num);
  printf("Digite uma sequencia de %d numeros: ", num);

  for (i = 0; i < num; i++) {
    scanf("%f", &seq[i]);
  }

  for (i = 0; i < num; i++) {
    vezes = 1;
    j = i + 1;
    while (j < num)
      if (seq[j] != seq[i]) 
	j++; 
      else {
        vezes++;
        num--;                   
        seq[j] = seq[num];       
      }

    printf("%.2f ocorre %d vezes\n", seq[i], vezes);
  }
  return 0;
}