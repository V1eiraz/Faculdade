#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char verificar_palindromo(char palavra[], char palavra2[])
{
    int i = 0, j = 0, tamanho;
    char letra;
    while (palavra[i] != '\0')
    {
        if (palavra[i] != ' ' && palavra[i] != '.' && palavra[i] != ',' && palavra[i] != ';' && palavra[i] != '!' && palavra[i] != '?' && palavra[i] != ':')
        {                            // retirando pontos e espaço
            palavra[j] = palavra[i]; // se tiver algum caracter indesejado ele sera pulado e sobreposto
            j++;
        }
        i++;
    }
    palavra[j] = '\0';
    strcpy(palavra2, palavra); // salvando a string
    tamanho = strlen(palavra); // pegando o tamanho da string
    j = tamanho - 1;
    for (i = 0; i < j; i++) // invertendo a string
    {
        letra = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = letra;
        j--;
    }
    if (strcasecmp(palavra, palavra2) == 0) // comparando as strings ignorando letras maiusculas
    {
        printf("True!\n\n");
    }
    else
    {
        printf("False!\n\n");
    }
}
int main()
{
    char palavra[100], palavra2[100];
    printf("Olá Elise, digite a palavra que deseja verificar:\n\n");
    fgets(palavra, 100, stdin);
    palavra[strlen(palavra) - 1] = '\0';
    printf("\n\n __________________________________________________\n");
    printf("|                                                  |");
    printf("\n|Se retornar 'true' a palavra é um palíndromo.     |\n");
    printf("|Se retornar 'false' a palavra não é um palíndromo.|\n");
    printf("|__________________________________________________|\n\n");
    printf("%c", verificar_palindromo(palavra, palavra2));
    return 0;
}