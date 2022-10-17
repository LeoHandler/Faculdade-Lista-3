#include<stdio.h>
#include<stdlib.h>

int main() {

    float num1, num2;

    printf("Insira 2 valores reais: ");
    scanf("%f %f", &num1, &num2);

    if(num1 > 0 && num2 > 0) {
    printf("Valores são validos");
    } else {
    printf("Valores não são validos");
    }

    return 0;
}