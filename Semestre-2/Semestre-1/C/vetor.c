// calcular a nota de 30 alunos diferentes, calcular a media aritmetica dos mesmos e ao fim imprimir a nota do aluno e a media.
#include <stdio.h>
#include <stdlib.h>
#define MAX 30
int main()
{

    int notas[30], media = 0, i;

    for (i = 0; i < MAX; i++)
    {
        printf("informe a nota do %d° aluno:\n", i + 1);
        scanf("%d", &notas[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        printf("A nota do aluno %d foi %d\n", i + 1, notas[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        media = media + notas[i];
    }
    media = media / MAX;
    printf("A media da sala foi dde %d.\n", media);
    return 0;
}