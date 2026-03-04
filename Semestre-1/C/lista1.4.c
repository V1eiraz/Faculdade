#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C = 0;
    float tot = 0, desc = 0, comp = 0;

    printf("Você é cliente especial ou funcionário?\n");
    printf("Se sim, digite [1].\n");
    printf("Se não, digite [2].\n");
    scanf("%d", &C);

    if (C == 1)
    {
        do
        {
            printf("Informe seu código:\n");
            scanf("%d", &C);
            if (C == 10)
            {
                printf("Você é um cliente especial!\n");
                printf("Por favor, informe o valor da compra!\n");
                scanf("%f", &comp);
                desc = comp * 0.10;
                tot = comp - desc;
                printf("O valor total a ser pago será de R$%.2f\n", tot);
                break;
            }
            else if (C == 5)
            {
                printf("Você é um funcionário!\n");
                printf("Por favor, informe o valor da compra!\n");
                scanf("%f", &comp);
                desc = comp * 0.05;
                tot = comp - desc;
                printf("O valor total a ser pago será de R$%.2f\n", tot);
                break;
            }
            else
            {
                printf("Informe um código válido!\n");
            }
        } while (C < 999);
    }
    else
    {
        printf("Seja bem vindo!\n");
        printf("Por favor, informe o valor da compra!\n");
        scanf("%f", &comp);
        printf("O valor total a ser pago será de R$%.2f\n", comp);
    }
    return 0;
}