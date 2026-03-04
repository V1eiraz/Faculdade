#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 30

typedef struct
{
    char titulo[T];
    char autor[T];
    int ano;
} livro;
int main()
{
    livro liv[3];
    for (int i = 0; i < 3; i++)
    {
        printf("insira o nome do livro %d.\n", i+1);
        fgets(liv[i].titulo, T, stdin);
        liv[i].titulo[strlen(liv[i].titulo) - 1] = '\0';
        printf("insira o nome do autor.\n");
        fgets(liv[i].autor, T, stdin);
        liv[i].autor[strlen(liv[i].autor) - 1] = '\0';
        printf("Insira a data de publicação.\n");
        scanf("%d", &liv[i].ano);
        getchar();
    }
    printf("Formatando as informações!\n");
    for (int i = 0; i < 3; i++)
    {
        printf("nome do livro %d: %s.\n", i+1, liv[i].titulo);
        printf("nome do autor:%s.\n", liv[i].autor);
        printf("data de publicação:%d.\n", liv[i].ano);
    }
    return 0;
}