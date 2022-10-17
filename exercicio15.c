#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[8], i;
    int multiplo5 = 0, entre = 0, maior = 0;
    float soma = 0;

    for (i = 0; i <= 7; i++) {
        printf("(Contador: %d) - Informe um numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i <= 7; i++) {
        printf("\t%d | ", vetor[i]);
    }
    for (i = 0; i <= 7; i++) {
        soma = soma + vetor[i];
        if (vetor[i] % 5 == 0)
            multiplo5++;
        if (vetor[i] > 10 && vetor[i] < 30)
            entre++;
        if (vetor[i] > maior)
            maior = vetor[i];
    }
    printf("\nMédia do vetor: %3.2f", soma / 8);
    printf("\nNumeros multiplos de 5: %d", multiplo5);
    printf("\nNumeros entre 10 e 30: %d", entre);
    printf("\nMaior numero do vetor: %d", maior);
    return 0;
}