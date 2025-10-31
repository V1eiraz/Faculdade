#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;

    printf("Me informe um numero!\n");
        scanf("%d", &a);

    if(a %2 ==0){
        printf("Esse numero e par!\n");
    }
    else{
        printf("Esse numero e impar!\n");
    }
    return 0;
}