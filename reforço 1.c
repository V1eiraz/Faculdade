#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, h;
    float ph, sal;
    printf("Informe seu número: \n");
    scanf("%d", &n);
    printf("Informe as horas trabalhadas e o valor p/h: \n");
    scanf("%d %f", &h, &ph);

    sal = h * ph;

    printf("O salário do funcionário de código %d é %2.f!\n", n, sal);
    return 0;
}