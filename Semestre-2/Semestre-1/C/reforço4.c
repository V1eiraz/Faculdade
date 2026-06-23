#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float a, b, c, media, lau, dv;

    printf("Informe 3 números: \n");
    scanf("%f %f %f", &a, &b, &c);

    media = (a + b + c) / 3;
    b -= media;
    a -= media;
    c -= media;
    lau = (pow(a, 2) + pow(b, 2) + pow(c, 2)) / 2;
    dv = sqrt(lau);

    printf("A media dos numeros é %2.f\n", media);
    printf("O desvio padrão é %f\n", dv);
    return 0;
}