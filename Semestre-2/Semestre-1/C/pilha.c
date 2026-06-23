#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *prox;
} No;
No *topo = NULL;
void empilhar(int valor) // push
{
    No *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->valor = valor;
        novo->prox = topo;
        topo = novo;
    }
    else

        printf("Erro ao alocar memoria!");
}
void desempilhar()
{

    if (topo != NULL)
    {
        No *remover = topo;
        topo = remover->prox;
        free(remover);
    }
    else
        printf("Pilha vazia!\n");
}

void imprimir()
{
    No *atual = topo;
    if(atual==NULL){
    printf("\nA pilha está vazia!\n");
    }
    while (atual != NULL)
    {
        printf("%d\n", atual->valor);
        atual = atual->prox;
    }
}

int main()
{

    int opcao, valor;
    do
    {
        printf("1-Empilhar\n2-Desempilhar\n3-Imprimir\n4-Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Insira o valor que deseja empilhar\n");
            scanf("%d", &valor);
            empilhar(valor);
            break;
        case 2:
            desempilhar();
            break;
        case 3:
            imprimir();
            break;
        case 4:
            printf("Finalizando!");
            break;
        default:
            printf("opção invalida!");
            break;
        }
    } while (opcao != 4);
}