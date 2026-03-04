#include <stdio.h>
#include <stdlib.h>
typedef struct no
{
    int valor;
    struct no *prox;
} No;
No *inicio = NULL;
No *fim = NULL;
void enfileirar(int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
    {
        printf("Erro na alocaçao de memoria!");
        exit(1);
    }
    novo->valor = valor;
    novo->prox = NULL;
    if (inicio == NULL)
    {
        inicio = novo;
        fim = novo;
    }
    else
    {
        fim->prox = novo;
        fim = novo;
    }
}
void chamada()
{
    if (inicio != NULL)
    {
        No *sair = inicio;
        inicio = sair->prox;
        printf("dado chamado %d",sair->valor);
        free(sair);
    }
    else
    {

        printf("\nA fila esta vazia!\n");
    }
}
void imprimir()
{
    No *atual = inicio;
    if (atual == NULL)
    {
        printf("\nA fila está vazia!\n");
        
    }
    while (atual != NULL)
    {
        printf("%d |", atual->valor);
        atual = atual->prox;
    }
}
int main()
{
    int opcao, valor;
    do
    {
        printf("1-Inserir na fila\n2-Chamar o primeiro da fila\n3-Imprimir\n4-Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Insira um valor:\n");
            scanf("%d", &valor);
            enfileirar(valor);
            printf("\n");
            break;
        case 2:
            printf("\n");
            chamada();
            printf("\n");
            break;
        case 3:
            printf("\n");
            imprimir();
            printf("\n");
            break;
        case 4:
            printf("Finalizando!");
            break;
        default:
            printf("opção invalida\n");
        }

    } while (opcao != 4);
    return 0;
}
