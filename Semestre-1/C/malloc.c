#include <stdio.h>
#include <stdlib.h>
int i;
int j;
int main()
{
    int l, d;
    int **matriz = (int **)malloc(3 * sizeof(int *));
    for (i = 0; i < 3; i++)
    {
        matriz[i] = (int *)malloc(3 * sizeof(int *));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}