#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int a = 0, b = 0, i = 0, somacp = 0;

    do
    {
        printf("Informe o intervalo:\n\n");
            scanf("%d %d", &a, &b);
            i = b;
        while (b <= a)
        {
            if (b % 2 == 0)
            {
                somacp += pow(b, 3); // b*b*b;
            }
            b++;
        }
        printf("a soma dos cubos dos numeros pares entre %d e %d eh %d\n\n", i, a, somacp);
            somacp = 0;
    }    while ((a != 0) && (b != 0));

    return 0;
}