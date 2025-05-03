#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n, n1 = 1, n2 = 1, f = 0;

    printf("informe o número de termos:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("O %d termo é : %d\n", n1, f);
        f = f + n2;
        n2 = f - n2;
        f = f - n2;
        f + = n2;
        n1++;
    }
    printf("O %d° termo da sequência de fibonacci é : %d", n, f);
    return 0;
}