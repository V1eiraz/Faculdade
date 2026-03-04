#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, senha, n1 = 2;

 for(n=0;n<3;n++){
    printf("Insira a senha:\n");
        scanf("%d", &senha);

    if(senha != 69){
        printf("errou meu nobre, tente denovo\n");
        printf("você tem mais %d tentativas.\n", n1);
        n1--;
    }else{
        printf("Parabéns, acesso liberado!");
        break;
    }

 }
 printf("Acesso bloqueado!");
 return 0 ;
    }
    
