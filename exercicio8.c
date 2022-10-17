#include <stdio.h>
#include <stdlib.h>
int main() {

    float soma = 0;
    int x;

    for (x = 1; x <= 100; x++) {
    soma = soma + x;
    }
    printf("O valor total da soma é igual a: %.2f", soma);
    return 0;
}