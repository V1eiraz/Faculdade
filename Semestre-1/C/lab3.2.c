#include<stdio.h>
#include<stdlib.h>

int main(){

    int i = 1, n, p = 1;

    printf("Me informe um numero para descobrir quantos numeros pares existem entre 0 e N!\n");
        scanf("%d",&n);
    
        while(i < n){
            if( i % 2 == 0){
            p++;
        }
        i++;
        }
        printf(" %d tem %d numeros positivos que o antecedem.", n, p);
        return 0;
     }
    
