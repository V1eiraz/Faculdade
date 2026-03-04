#include <stdio.h>
#include <stdlib.h>

int tri(int l1, int l2, int l3)
{
    if (l1 != l2 && l1 == l3 || l2 != l3 && l2 == l1)
    {
        return 2;
    }
    else if (l1 == l2 == l3)
    {
        return 0;
    }
    else if (l1 != l2 != l3)
    {
        return 1;
    }
}
int main()
{

    int l1 = 1, l2 = 1, l3 = 1, result, escolha, n = 0;

    printf("Qual o triangulo?\n");
    printf("Escolha o método:\n");
    printf("while = [1]\n");
    printf("Do..while = [2]\n");
    printf("For = [3]\n");
    scanf("%d", &escolha);

    if (escolha == 1)
    {
        while (l1 > 0 || l2 > 0 || l3 > 0)
        {
            printf("Equilátero = [0]\n");
            printf("Escaleno = [1]\n");
            printf("Isóceles = [2]\n");
            printf("Insira o primeiro lado:\n");
            scanf("%d", &l1);
            printf("Insira o segundo lado:\n");
            scanf("%d", &l2);
            printf("Insira o terceiro lado:\n");
            scanf("%d", &l3);
            if (l1 <= 0)
            {
                break;
            }
            else if (l2 <= 0)
            {
                break;
            }
            else if (l3 <= 0)
            {
                break;
            }
            else
            {
                result = tri(l1, l2, l3);
                printf("resultado usando while: %d\n", result);
            }
        }
    }
    else if (escolha == 2)
    {
        do
        {
            printf("Equilátero = [0]\n");
            printf("Escaleno = [1]\n");
            printf("Isóceles = [2]\n");
            printf("Insira o primeiro lado:\n");
            scanf("%d", &l1);
            printf("Insira o segundo lado:\n");
            scanf("%d", &l2);
            printf("Insira o terceiro lado:\n");
            scanf("%d", &l3);
            if (l1 <= 0)
            {
                break;
            }
            else if (l2 <= 0)
            {
                break;
            }
            else if (l3 <= 0)
            {
                break;
            }
            else
            {
                result = tri(l1, l2, l3);
                printf("resultado usando do...while: %d\n", result);
            }
        } while (l1 > 0 || l2 > 0 || l3 > 0);
    }
    else if (escolha == 3)
    {
        for (int i = 1; i >= n; i++)
        {
            printf("Equilátero = [0]\n");
            printf("Escaleno = [1]\n");
            printf("Isóceles = [2]\n");

            printf("Insira o primeiro lado:\n");
            scanf("%d", &l1);
            printf("Insira o segundo lado:\n");
            scanf("%d", &l2);
            printf("Insira o terceiro lado:\n");
            scanf("%d", &l3);
            if (l1 <= 0)
            {
                break;
            }
            else if (l2 <= 0)
            {
                break;
            }
            else if (l3 <= 0)
            {
                break;
            }
            else
            {
                result = tri(l1, l2, l3);
                printf("resultado usando for: %d\n", result);
            }
        }
    }
}