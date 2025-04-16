#include<stdio.h>
#include<stdlib.h>

int main(){
    int p;

    printf("Me informe um numero!\n");
        scanf("%d", &p);
        fflush(stdin);

    if(p>0){
        printf("esse numero e positivo");}

    if(p==0){
        printf("esse numero e nulo\n");}

    if(p<0){
        printf("esse numero e negativo\n");
    }
}