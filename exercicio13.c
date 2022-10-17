#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, vetor[8];
    int contador = 0, soma1 = 0, soma2 = 0;

    for (i = 0; i <= 7; i++)
    {
        printf("Insira um valor: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] > 30) {
            contador++;
            soma1 = soma1 + vetor[i];
        }
    }
    for (i = 0; i <= 7; i++) {
        printf("\t%d", vetor[i]);
    }

    printf("\nPossue %d números maiores que 30", contador);
    printf("\nA Soma dos numeros maiores que 30 e igual a: %d", soma1);

    for (i = 0; i <= 7; i++) {
        soma2 = soma2 + vetor[i];
    }
    printf("\nA soma total dos numeros digitados é igual a: %d", soma2);
    return 0;
}