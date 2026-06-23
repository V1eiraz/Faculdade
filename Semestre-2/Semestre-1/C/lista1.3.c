#include <stdlib.h>
#include <stdio.h>

int potencia(int x, int n)
{
    if (n == 1)
    {
        return x;
    }
    else if (n == 0)
    {
        return 1;
    }

    return x * potencia(x, n - 1);
}

int main()
{
    int x, n;

    printf("Informe um numero:\n");
    scanf("%d", &x);
    printf("Informe o numero do expoente:\n");
    scanf("%d", &n);
    printf("%d elevado a %d é %d\n", x, n, potencia(x, n));
    return 0;
}