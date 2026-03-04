#include <stdio.h>
#include <stdlib.h>
#include "exemplo.h"
int main()
{
    printf("Testando arquivo de cabeçalho\n");
    int z = 5;
    int som = soma(z);
    int mult = multi(z);
    printf("%d + %d = %d\n", z, z, som);
    printf("%d X %d = %d\n", z, z, mult);
    return 0;
}