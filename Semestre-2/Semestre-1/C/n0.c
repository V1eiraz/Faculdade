#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n, p=0, neg=0, zer=0;

    while(n!=0){
        printf("Informe um numero:\n");
           scanf("%d", &n);

           if(n==0){
            zer++;
           }
           else if(n<0){
            neg++;
           }
           else(n>0){
            p++;
           }
    }
    printf("positivos:  %d\n",p);
    printf("negativos:  %d\n", neg);
    printf("zeros:  %d\n", zer);
    return 0;
}