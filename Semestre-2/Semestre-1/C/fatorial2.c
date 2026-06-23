#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i, fator = 1, num = 1;

    printf("Informe um numero que deseja saber o fatorial:\n");
        scanf("%d", &num);
        
        for(i=num; i > 1; i--){
        printf("%d X %d = ", i, fator);
        fator*=i;
        printf("%d\n", fator);
}
    printf("O fatorial de %d eh %d.\n", num, fator);
    return 0;
}