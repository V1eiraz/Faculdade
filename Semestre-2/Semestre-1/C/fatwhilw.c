#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fat = 1, n;

    printf("Informe o numero para  saber o fatorial:\n");
    scanf("%d", &n);

    do
    {
        fat *= n;
        printf("%d\n", fat);
        n--;
    } while (n > 1);
    return 0;
}