#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[30];

    printf("Insira seu nome:\n");
    fgets(nome, 30, stdin); // vai ler espaços e não vai deixar a memoria estourar, diferente do scanf 
    nome[strlen(nome) - 1] = '\0';
    fflush(stdin);//limpa o teclado
    printf("Seu nome é : \n%s.", nome);
    return 0;
}