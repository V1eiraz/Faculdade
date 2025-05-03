#include <stdio.h>
#include <stdlib.h>

int main()
{

    int p1, p2, q1, q2, v1, v2, ipi, vt;
    float pr;

    printf("Informe o código, a quantidade e o valor p/unid do produto 1: \n");
    scanf("%d %d %d", &p1, &q1, &v1);
    printf("Informe o código, a quantidade e o valor p/unid do produto 2: \n");
    scanf("%d %d %d", &p2, &q2, &v2);
    printf("Informe a porcentagem do IPI: \n");
    scanf("%d", &ipi);

    pr = ((q1 * v1 + q2 * v2) * ipi / 100);
    vt += (q1 * v1 + q2 * v2) + pr;
    printf("O valor total a ser pago é : %d", vt);
    return 0;
}