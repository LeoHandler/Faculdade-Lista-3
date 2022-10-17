#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, vet[8], num;
    int encontrado = 0;

    for (x = 0; x < 8; x++) {
        printf("Digite um numero - (Contador = %d): ", x);
        scanf("%d", &vet[x]);
    }
    printf("\nDigite o valor deseja encontrar: ");
    scanf("%d", &num);

    for (x = 0; x < 8; x++)
        if (vet[x] == num) {
        printf("O numero %d está na posicão %d \n", num, x);
        printf("O numero %d foi o numero %d a ser digitado", num, (x + 1));
        encontrado = 1;
        }
    if (encontrado != 1)
        printf("Este numero não foi encontrado :(");
    return 0;
}