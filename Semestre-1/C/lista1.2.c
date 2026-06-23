#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota1 = 0, nota2 = 0, media = 0;

    while (nota1 <= 2147483647)
    {
        printf("Insira a nota da primeira prova:\n");
        scanf("%f", &nota1);
        if (nota1 >= 0 && nota1 <= 10)
        {
            printf("Nota válida!\n");
            break;
        }
        else
        {
            printf("Nota Inválida!\n");
        }
    }
    while (nota2 <= 2147483647)
    {
        printf("Insira a nota da segunda prova:\n");
        scanf("%f", &nota2);
        if (nota2 >= 0 && nota2 <= 10)
        {
            printf("Nota válida!\n");
            break;
        }
        else
        {
            printf("Nota Inválida!\n");
        }
    }
    media = (nota1 + nota2) / 2;
    printf("A media semestral foi de %.2f!", media);
    return 0;
}
