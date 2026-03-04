#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
    char nome[10];
    int preco;
    int qtd;
} produtos;

int main()
{
    int batata = 5, repolho = 3, refrigerante = 12, arroz = 30, cafe = 200, total = 0, tips;
    
    produtos prod[5];

    printf("Quantos tipos de produtos voce comprou?\n");
    scanf("%d", &tips);
    getchar();

    for (int i = 0; i < tips; i++)
    {
        printf("Informe o nome do produto:\n");
        fgets(prod[i].nome, 10, stdin);
        prod[i].nome[strlen(prod[i].nome) -1] = '\0';
        if (strcmp(prod[i].nome, "batata") == 0 || strcmp(prod[i].nome, "repolho") == 0 || strcmp(prod[i].nome, "refrigerante") == 0 || strcmp(prod[i].nome, "arroz") == 0 || strcmp(prod[i].nome, "cafe") == 0)
        {
            printf("Insira a quatidade:\n");
            scanf("%d", &prod[i].qtd);
            getchar();
            if (strcmp(prod[i].nome, "batata") == 0)
            {
                prod[i].preco = batata;
                total = total + prod[i].preco * prod[i].qtd;
            }
            else if (strcmp(prod[i].nome, "repolho") == 0)
            {
                prod[i].preco = repolho;
                total = total + prod[i].preco * prod[i].qtd;
            }
            else if (strcmp(prod[i].nome, "refrigerante") == 0)
            {
                prod[i].preco = refrigerante;
                total = total + prod[i].preco * prod[i].qtd;
            }
            else if (strcmp(prod[i].nome, "arroz") == 0)
            {
                prod[i].preco = arroz;
                total = total + prod[i].preco * prod[i].qtd;
            }
            else if (strcmp(prod[i].nome, "cafe") == 0)
            {
                prod[i].preco = cafe;
                total = total + prod[i].preco * prod[i].qtd;
            }
        }
        else{
            printf("produto nao identificado!\n");
            i--;
        }
    }
    printf("Sua compra ficou em R$%d", total);
}