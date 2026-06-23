#include <stdlib.h>
#include <stdio.h>

int main()
{

    int qtd, i;
    float media;

    printf("Informe a quantidade de alunos.\n");
    scanf("%d", &qtd);
    int alun[qtd];

    for (i = 0; i < qtd; i++)
    {
        printf("Informe a nota do %d° aluno:\n", i + 1);
        scanf("%d", &alun[i]);
    }
    for (i = 0; i < qtd; i++)
    {
        printf("A nota do aluno %d° foi %d.\n", i + 1, alun[i]);
    }
    for (i = 0; i < qtd; i++)
    {
        media = media + alun[i];
    }
    media = media / qtd;
    printf("A media da sala foi de %.2f.\n", media);
    return 0;
}