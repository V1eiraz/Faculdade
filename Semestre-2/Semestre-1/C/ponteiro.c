#include <stdio.h>
#include <stdlib.h>

void muda(int *x)
{
    *x = *x * 3;
}
int main()
{
    int x = 10;
    muda(&x);
    printf("%d\n", x);
    return 0;
}