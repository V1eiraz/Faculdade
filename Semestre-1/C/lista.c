#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

typedef struct no
{
    struct no *proximo;
    int valor;
} no;

typedef struct
{
    no *inicio;
    int tam;
} Lista;

void inserirInicio(Lista *lista, int valor) // inserir no inicio da lista
{
    no *novo = (no *)malloc(sizeof(no));
    novo->valor = valor; //(*novo).valor = valor
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}
void inserirFinal(Lista *lista, int valor)
{
    no *aux, *novo = (no *)malloc(sizeof(no));
    novo->valor = valor;
    novo->proximo = NULL;
    if (lista->inicio == NULL)
    {

        lista->inicio = novo;
    }
    else
    {
        aux = lista->inicio;
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
    lista->tam++;
}
void imprimir(Lista *lista)
{
    no *inicio = lista->inicio;
    while (inicio != NULL)
    {
        printf("%d\n", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("tamanho da lista é : %d\n", lista->tam);
}
int main()
{

    Lista lista;
    lista.inicio = NULL;
    lista.tam = 0;
    int opcao, valor;
    do
    {
        printf("1-Inserir no inicio\n2-Inserir no final\n3-Imprimir\n4-Sair\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Insira um valor:\n");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            printf("\n");
            break;
        case 2:
            printf("\n");
            printf("Insira um valor:\n");
            scanf("%d", &valor);
            inserirFinal(&lista, valor);
            printf("\n");
            break;
        case 3:
            printf("\n");
            imprimir(&lista);
            printf("\n");
            break;
        case 4:
            printf("Finalizando!");
            sleep(1);
            free(&lista);
            break;
        deafault:
            printf("opção invalida\n");
        }

    } while (opcao != 4);
    return 0;
}