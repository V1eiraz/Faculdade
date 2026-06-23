#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *prox;//struct no representa um no e *prox é um ponteiro que aponta para outro no

} no;
no *inicio = NULL;
no *fim = NULL;
void enfileirar(int valor)
{
    no *novo = malloc(sizeof(no));//criei uma nova struct no na memoria e apontei para ela 
    if (novo == NULL)
    { 
        printf("Falha na alocação de memoria!");
        exit(1);
    }
    novo->valor = valor;//no elemento valor da nova struct criada eu adicionei o valor coletado
    novo->prox = NULL;//prox=NULL pois ele é o ultimo e nao aponta para nada
    if (inicio == NULL)
    {
        inicio = novo;//se a primeira struct ainda esta vazia ela vai receber os valores da nova
        fim = novo;
    }
    else
    {
        fim->prox = novo;//se nao ela vai ir para o final, assim a anterior a ela apontando para a mesma
        fim = novo;
    }
}
void chamar()
{
    if (inicio != NULL)//se tiver uma struct no inicio
    {
        no *sair = inicio;//criei uma nova struct que vai ser igual a inicial
        printf("dado chamado :%d", inicio->valor);
        inicio = sair->prox;//a struct original receber os valores da proxima
        free(sair);//irei liberar a memoria da "inicial"
    }
    else
    {
        printf("Lista vazia");
    }
}
void imprimir()
{
    no *atual = inicio;
    while (atual != NULL)
    {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
}
int main()
{
    int valor, opcao;
    do
    {
        printf("fala ae\n");
        scanf("%d", &valor);
        enfileirar(valor);
        imprimir();
        printf("tirar?");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            chamar();
            break;
        
        default:

            break;
        }
    } while (valor != 0);
}