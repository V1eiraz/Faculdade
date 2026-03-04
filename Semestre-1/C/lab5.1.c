#include <stdio.h>
#include <stdlib.h>

float sal(int x)
{
    x = 0;

    if (x < 3000)
    {
        return x = (x * 0, 20);
    }
    else if (x >= 3000 && x <= 8000)
    {
        return x = (x * 0, 15);
    }
    else if (x > 8000)
    {

        return x = (x * 0, 10);
    }
}
int main()
{

    float x = 0, reaj = 0;

    for (int i = 1; i > x; i++)
    {
        printf("Informe o salário da %d° pessoa: \n", i);
        scanf("%f", &x);
        if (x < 0)
        {
            printf("Informe um salário válido\n");
            break;
        }
        printf("O reajuste foi de %0.f reais.\n", sal(x));

        reaj = sal(x) + x;

        printf("O salário total vai ser %2.f\n");
    }
}