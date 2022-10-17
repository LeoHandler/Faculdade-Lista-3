#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vetor1[5], vetor2[5];
    int i;
    for (i = 1; i <= 5; i++) {
        printf("Insira um numero: ");
        scanf("%f", &vetor1[i]);

        vetor2[i] = pow(vetor1[i], 3);

        printf("%.0f", vetor2[i]);
        printf("\n");
    }
    return 0;
}