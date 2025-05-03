#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, maior = -2147483647, menor = 2147483647, n, n1;

    printf("Quantos numeros terá a sequencia?\n");
    scanf("%d", &n);
    n1 = n;
    while (n > 0)
    {
        printf("Informe um número:\n");
        scanf("%d", &x);
        if (x < menor)
        {
            menor = x;
        }
        else if (x > maior)
        {
            maior = x;
        }
        if (menor > maior)
        {
            maior = menor;
        }

        n--;
    }
    printf("A sequência contém %d numeros, o maior sendo %d e o menor sendo %d.\n", n1, maior, menor);
    return 0;
}