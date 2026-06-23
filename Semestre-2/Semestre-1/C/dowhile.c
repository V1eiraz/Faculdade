#include<stdio.h>

int main(){

    int i = 20;

    do{ /*aqui ele vai executar primeiro e fazer o teste de parada apenas no final, 
        ou seja se o primeiro valor for diferente do teste , ainda sim ele sera mostrado*/
        printf("%d\n", i);
            i++;
    }while(i <= 19);
return 0;
}