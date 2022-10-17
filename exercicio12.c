#include <stdio.h>
#include <stdlib.h>
int main() {

    int vetor1[10], vetor2[10];
    int i;
    int j = 0;

    for (i = 0; i <= 9; i++) {
        vetor1[i] = j + 2;
        j = j + 2;
    }

    for (i = 0; i <= 9; i++) {
        printf("%d | ", vetor1[i]);
        printf(" ");
    }

    for (i = 0; i <= 9; i++) {
        vetor2[i] = i + 10;
    }
    
    for (i = 0; i <= 9; i++) {
        printf("%d | ", vetor2[i]);
        printf(" ");
    }
    for (i = 0; i <= 9; i++) {
        printf("%d | ", vetor1[i] + vetor2[i]);
        printf(" ");
    }
    return 0;
}