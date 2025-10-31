#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int main()
{
    int vetor[MAX], vetor2[MAX], vetor3[20], i, p, org;
    for (i = 0; i < MAX; i++)
    {  
        printf("Insira o valor do %d° elemento:\n", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor do %d° elemento:\n", i + 1);
        scanf("%d", &vetor2[i]);
    }
    for (i = 0; i < MAX; i++)
    {
        vetor3[i] = vetor[i];
        vetor3[i + MAX] = vetor2[i];
    }
    for (i = 0; i < MAX * 2; i++)
    {
        for (p = i + 1; p < MAX * 2; p++)
        {
            if (vetor3[i] < vetor3[p])
            {

                org = vetor3[i];
                vetor3[i] = vetor3[p];
                vetor3[p] = org;
            }
        }
    }
    for (int w = 0; w < 20; w++)
    {
        printf("o %d° termo é :%d\n", w + 1, vetor3[w]);
    }
    return 0;
}