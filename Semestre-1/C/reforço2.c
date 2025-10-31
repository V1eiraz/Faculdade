#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, s, sub, m;
    float div;

    printf("informe dois nùmeros inteiros:\n");
    scanf("%d %d", &a, &b);

    s = a + b;
    sub = a - b;
    m = a * b;
    div = a / b;

    printf(" A soma de %d e %d é : %d\n", a, b, s);
    printf(" A subtração de %d e %d é : %d\n", a, b, sub);
    printf(" A multiplicação de %d e %d é : %d\n", a, b, m);
    printf(" A divisão de %d e %d é : %2.f\n", a, b, div);
    return 0;
}