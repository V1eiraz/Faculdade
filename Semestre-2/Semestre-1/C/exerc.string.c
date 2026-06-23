#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cargo[30];
    float sal, nwsal;

    printf("Insira seu cargo:\n");
    fgets(cargo, 30, stdin);           // le oque eu digitei
    cargo[strlen(cargo) - 1] = '\0';   // Tira o \n
    if (strcmp(cargo, "gerente") == 0) // compara oque eu escrevi com a palavra
    {
        printf("Insira seu salário:\n");
        scanf("%f", &sal);
        nwsal = sal + sal * 0.1;
        printf("Seu salario é de %.2f e seu salário com aumento é de %.2f", sal, nwsal);
    }
    else if (strcmp(cargo, "engenheiro") == 0)
    {
        printf("Insira seu salário:\n");
        scanf("%f", &sal);
        nwsal = sal + sal * 0.2;
        printf("Seu salario é de %.2f e seu salário com aumento é de %.2f", sal, nwsal);
    }
    else if (strcmp(cargo, "tecnico") == 0)
    {
        printf("Insira seu salário:\n");
        scanf("%f", &sal);
        nwsal = sal + sal * 0.3;
        printf("Seu salario é de %.2f e seu salário com aumento é de %.2f", sal, nwsal);
    }
    else
    {
        printf("Insira seu salário:\n");
        scanf("%f", &sal);
        nwsal = sal + sal * 0.4;
        printf("Seu salario é de %.2f e seu salário com aumento é de %.2f", sal, nwsal);
    }
    return 0;
}