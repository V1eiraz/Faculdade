#include<stdlib.h>
#include<stdio.h>

int main (){
    int i, numero;

printf("Me informe um numero:\n");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i ++){
        printf("%d X %d = %d \n", numero, i, numero*i);
    }
    return 0;
}