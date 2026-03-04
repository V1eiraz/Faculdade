#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int i=1;

    while(i<=27){   //ele vai verificar se a condição é verdadeira , se sim o comando executa , se não ele pula o bloco de comandos. 
        printf("%d\n", i);// vai mostrar o valor de i.
            i++;    //vai somar 1 no valor de i e vai retornar para o while para verificar se ainda se encaixa nos parametros.
    }
    return 0;
}
