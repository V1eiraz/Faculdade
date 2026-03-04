
// Calculadora simples
#include<stdio.h>
#include<stdlib.h>
#define texto "===CALCULADORA SIMPLES==="
int main(){
    int menu;
    float a, b, result;
    
    printf("%s\n\n", texto);
printf("Escolha um numero na tabela abaixo\n\n");
printf("[1] para soma                  + \n");
printf("[2] para subtracao             - \n");
printf("[3] para multiplicacao         * \n");
printf("[4] para divisao               % \n");
    scanf("%d", &menu);
printf("\n");

    switch (menu){
    case 1:
        printf("voce escolheu adicao!\n");
        printf("escolha um numero: \n");
            scanf("%f", &a);
        printf("escolha outro numero :\n");
            scanf("%f", &b);
        
        printf("\n");

        result= a + b;

        printf("%.2f\n",result);
        break;
    
    case 2:
            printf("voce escolheu a subtracao!\n");
             printf("escolha um numero: \n");
                scanf("%f", &a);
        printf("escolha outro numero :\n");
            scanf("%f", &b);
        
        printf("\n");

        result = a - b;

        printf("%.2f\n",result);
        break;
    
    case 3:
            printf("voce escolheu a multiplicacao!\n");
            printf("escolha um numero: \n");
                scanf("%f", &a);
            printf("escolha outro numero :\n");
                scanf("%f", &b);

            printf("\n");

            result = a * b;

            printf("%.2f", result);
            break;

    case 4:
    printf("voce escolheu a divisao!\n");
            printf("escolha um numero: \n");
                scanf("%f", &a);
            printf("escolha outro numero :\n");
                scanf("%f", &b);

            printf("\n");

            result = a / b;

            printf("%.2f", result);
            break;



    }
return 0;
}