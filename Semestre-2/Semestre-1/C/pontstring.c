#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void palavra(char *x)
{

    for (int i = 0; i < 5; i++)
    {
        printf("%c\n", x[i]);
    }
}
int main()
{
    char pa[5];
    printf("insira a string\n");
    fgets(pa, 5, stdin);
    palavra(pa);
}