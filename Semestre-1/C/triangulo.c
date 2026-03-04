#include<stdlib.h>
#include<stdio.h>
int main(){
int n, i, l;

printf("Insira a altura do triangulo:\n");
    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        for(l = 1; l<=i; l++){
            printf("*");
        }
        printf("\n");
    }
    }
