#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int contador1 = 0, contador2 = 0;

    printf("Insira a idade: ");
    scanf("%d", &idade);

    while (idade != -99) {
        if (idade < 21)
            contador1++;
        if (idade > 50)
            contador2++;
        printf("Digite a Idade: (Para finalizar, digite -99)");
        scanf("%d", &idade);
    }

    printf("\nO total de pessoas menor de 21 é igual a: %d\n", contador1);
    printf("O total de pessoas com mais de 50 anos é igual a: %d\n", contador2);
    return 0;
}