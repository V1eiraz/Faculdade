#include <stdio.h>
#include<stdlib.h>

int main() {
    int numero, i;

printf("Me informe um numero inteiro!\n");
    scanf("%d",&numero);
printf("A tabuada de %d e:\n", numero);

    for(i = 1; i <=10; i ++){
        
        printf("A tabuada do %d X %d = %d\n", numero, i, numero*i);
    }
    return 0;
}
