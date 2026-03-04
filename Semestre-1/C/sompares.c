#include<stdio.h>
#include<stdlib.h>

int main(){
    int num = 0, i = 1, soma = 0;
    do{
        printf("Me informe um numero\n");
        scanf("%d", &num);
     }
    while (num < 0);

    while (i < num){
        if(i % 2 == 0){
            soma = soma + i;
            
        }
        i++;
    }
    printf("%d\n", soma);

    
}

