#include <stdio.h>
#include <stdlib.h>
int i;
int main()
{
    int n;
    float media;
    printf("Informe a quantidade de numeros\n");
    scanf("%d", &n);
    float *vet = (float *)malloc(n * sizeof(float *));
    for (i = 0; i < n; i++)
    {
        printf("Informe o numero %d:\n", i + 1);
        scanf("%f", &vet[i]);
        printf("o numero %d é %.2f\n", i + 1, vet[i]);
    }
    for (i = 0; i < n; i++)
    {
        media = media + vet[i];
    }
    media = media / n;
    printf("A media sera %.2f\n", media);
}