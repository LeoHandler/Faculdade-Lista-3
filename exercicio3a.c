#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num, quadrado;
    
    printf("Informe um número: ");
    scanf("%d", &num);
    
    while(num != 0){
        quadrado = pow(num, 2);
        printf("O quadrado do número é: %d\n\n", quadrado);
        
        printf("Informe um número: ");
        scanf("%d", &num);
    }
    

    return 0;
}