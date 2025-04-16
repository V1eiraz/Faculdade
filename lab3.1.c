#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int i, num, fator = 1;

printf("Me informe um numero para calcular seu fatorial:\n");
    scanf("%d", &num);
i = num;

    while(i > 0){
        printf("%d X %d\n", fator, i);
            fator = fator*i;
            i--;
    }
    printf("O fatorial de %d ou %d! e %d\n", num, num, fator);
    return 0;
}