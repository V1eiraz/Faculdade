#include <stdio.h>
#include <stdlib.h>
int busca_fibonacci(int x[17], int chave, int meio, int ini, int end, int f, int n2)
{
    ini = 0;
    end = 16;
    f = 0;
    n2 = 1;
    for (int i = 0; i <= end; i++)
    {
        f = f + n2;
        n2 = f - n2;
        f = f - n2;
        f = f + n2;
        x[i] = f; // fazendo um for para calcular a sequencia de fibonacci e ja atribuir nas posições ordenadas
    }

    do
    {
        meio = (ini + end) / 2; // fazendo a busca binária
        if (chave < x[meio])    // se o número do meio for maior que a chave , ele irá descartar os números maiores e refazer
        {
            end = meio - 1;
        }
        else if (chave > x[meio]) // se o número do meio for menor que a chave, ele irá descartar os números menores e refazer
        {
            ini = meio + 1;
        }
    } while (chave != x[meio] && ini <= end); // refazendo isso ate achar ou procurar todos os números

    if (x[meio] == chave)
    {
        printf("\033[0;32mO número chave está dentro da sequência!\033[0m\n\n"); // se o número informado estiver na sequência irá printar isso
    }
    else
    {
        printf("\033[0;31mQue pena!\nO número chave indicado não está na sequência\033[0m\n\n"); // se não estiver, irá printar isso
    }
}
int main()
{
    int f, chave, meio, ini, end, x[17], n2;
    printf("Informe o número chave a ser procurado:\n");
    scanf("%d", &chave);
    printf(" \033[0;30m_______________________\033[0m\n");
    printf("\033[0;30m|                       |\033[0m\n");
    printf("\033[0;30m|\033[0;33mCalculando o resultado!\033[0m\033[0;30m|\033[0m\n");
    printf("\033[0;30m|_______________________|\033[0m\n\n");
    busca_fibonacci(x, chave, meio, ini, end, f, n2);
    return 0;
}