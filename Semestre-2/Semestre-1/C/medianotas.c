#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 1, t = 0, m = 0, soma = 0;

    while (n > 0)
    {
        printf("Informe uma nota: \n");
        scanf("%d", &n);
        if (n >= 0 && n <= 10)
        {
            soma += n;
            t++;
        }
        else
        {
            printf("A nota deve ser de 0 a 10\n");
        }
    }
    m = soma / t;
    printf("A media eh: %d\n", m);
}