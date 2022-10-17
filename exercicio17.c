#include<stdio.h>
#include<stdlib.h>

int main() {

    int n, i, aluno, pontos;
    char gabarito[5], resp[5];

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    printf("Digite o gabarito da prova [A, B, C, D, E]: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &gabarito[i]);
    }

    for (aluno = 1; aluno <= n; aluno++) {
        pontos = 0;
        printf("Digite as respostas do aluno %d [A, B, C, D, E]: ", aluno);
        for (i = 0; i < 5; i++)
        {
            scanf(" %c", &resp[i]);
            if (resp[i] == gabarito[i])
                pontos = pontos + 1;
        }
        printf("O aluno %d acertou %d questões\n", aluno, pontos);
    }
    return 0;
}