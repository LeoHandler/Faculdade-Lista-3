#include<stdio.h>
#include<stdlib.h>
 
int main() {
	float escalar, num;
    printf("Digite o valor da escala: ");
	scanf("%f", &escalar);

	printf("Deseja multiplicar por qual valor: ");
    while(scanf("%f", &num)) {
    	printf("%f ", num*escalar);
    }
 
	return 0;
}