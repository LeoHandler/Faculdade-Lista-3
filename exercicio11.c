#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10], i;
    int j = 0;

    //Starting for
    for (i = 0; i <= 9; i++) {
        vetor[i] = j + 2;
        j = j + 2;
    }

    for (i = 0; i <= 9; i++){ 
    printf(" %d ", vetor[i]);
    }

    return 0;
}