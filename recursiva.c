#include <stdio.h>
#include <stdlib.h>

int fatorial(int x)
{

    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * fatorial(x - 1);
    }
}

int main()
{

    int x;

    printf("Insira o valor: \n");
    scanf("%d", &x);
    x = fatorial(x);

    printf("%d\n", x);
    return 0;
}