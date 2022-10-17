
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, cont = 0, num;
    float media;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    while(num != 0) {
        cont = cont + 1;
        soma = soma + num;
        
        printf("Informe um número: ");
        scanf("%d", &num);
    } 

    if(cont != 0) {
        media = soma/cont;
        printf("A média é %.2f", media);
    } else {
        printf("Não é possível divisão por zero!");
    }
    
    return 0;
}