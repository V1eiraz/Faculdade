#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i = 1, fator = 1, num = 1;

    printf("Informe um numero que deseja saber o fatorial\n");
    scanf("%i", &num);
    i = num;
    while (i > 1)
    {
        printf("%d X %d = ", fator, i);
        fator = fator * i;
        i--;
        printf("%d\n", fator);
    }

    printf("O fatorial de %d e %d.", num, fator);
    return 0;
}