#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define GRU 40
#define AAA 5
#define BBB 100

void espaço(int c, int l, char campo[GRU][GRU]) // colando espaço ' ' em toda a matriz
{
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            campo[i][j] = ' ';
        }
    } /*
      for (int i = 0; i < l; i++)
   {
       for (int j = 0; j < c; j++)
       {
           printf("%c",campo[i][j]);
       }
       printf("\n");
   }*/
}
void info(int r, int l, int l1, int c, int c1, char campo[GRU][GRU]) // preenchendo a matriz com as informações
{
    srand(time(NULL));

    for (int i = 0; i < r; i++)
    {
        l1 = rand() % l;
        c1 = rand() % c;
        if (campo[l1][c1] == ' ')
        {
            campo[l1][c1] = 'R';
        }
        else
        {
            i--;
        }
    }
    int human;
    human = 1;
    for (int i = 0; i < human; i++)
    {
        l1 = rand() % l;
        c1 = rand() % c;
        if (campo[l1][c1] == ' ')
        {
            campo[l1][c1] = 'H';
        }
        else
        {
            i--;
        }
    }
    int zona;
    zona = 1;
    for (int i = 0; i < zona; i++)
    {
        l1 = rand() % l;
        c1 = rand() % c;
        if (campo[l1][c1] == ' ')
        {
            campo[l1][c1] = 'Z';
        }
        else
        {
            i--;
        }
    }
    printf("\nCampo de batalha sendo gerado!\n\n");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (campo[i][j] == 'R')
            {
                printf("\033[0;31m%c\033[0m", campo[i][j]);
            }
            else if (campo[i][j] == 'H')
            {
                printf("\033[0;33m%c\033[0m", campo[i][j]);
            }
            else if (campo[i][j] == 'Z')
            {
                printf("\033[0;32m%c\033[0m", campo[i][j]);
            }
            else
            {
                printf("%c", campo[i][j]);
            }
        }
        printf("\n");
    }
}
void fuga_humana(int pilhax[BBB], int pilhay[BBB], int topo, int c, int l, char campo[GRU][GRU], int x, int y) // fazendo a função do caminho
{
    int visitado[BBB][BBB] = {0}; // contagem de casas visitadas
    int dx[] = {-1, 1, 0, 0};     // esquerda direita
    int dy[] = {0, 0, 1, -1};     // cima baixo
    int vivo = 0;                 // saber se encontrou o z
    topo = -1;
    for (int i = 0; i < l; i++) // procurando o humano
    {
        for (int j = 0; j < c; j++)
        {
            if (campo[i][j] == 'H')
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    if (campo[x][y] != 'H')
    {
        printf("Humano não encontrado");
    }

    topo++;           // impilhando a posição inicial
    pilhax[topo] = x; // posição inicial do humano
    pilhay[topo] = y;
    visitado[x][y] = 1;

    int px = 0;
    int py = 0;
    while (topo >= 0)
    {
        x = pilhax[topo]; // x e y vão receber a ultima posição
        y = pilhay[topo];
        topo--;
        if (campo[x][y] == ' ')
        {
            campo[x][y] = '*'; // marcando as posições q ele passa
        }
        int i = 0;

        for (i = 0; i < 4; i++) // conferindo as direções
        {
            px = x + dx[i]; // dando uma direçao para ele
            py = y + dy[i];
            if (px >= 0 && px < l && py >= 0 && py < c && visitado[px][py] == 0) // conferindo se ja passou por la e os limites da matriz
            {

                if (campo[px][py] == 'Z') // se tiver chegado na zona ira parar
                {
                    pilhax[topo] = px;
                    pilhay[topo] = py;
                    visitado[px][py] = 1;
                    vivo = 1;
                    break;
                }

                if (campo[px][py] == ' ') // se estiver vazio ele vai empilhar a posição
                {
                    topo++;
                    pilhax[topo] = px;
                    pilhay[topo] = py;
                    visitado[px][py] = 1;
                }
            }
        }
        if (vivo == 1) // se estiver encontrado a zona ele ira sair do while
        {
            break;
        }
    }
    if (campo[px][py] == 'H') // se mesmo passando por isso tudo, ele continuar em H é porque não tinha caminhos possiveis
    {
        printf("Não existem caminhos possíveis para chegar a zona, você morreu!\n");
    }
    else
    {
        printf("\n\n________________________________\n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%-2c", campo[i][j]);
            }
            printf("\n");
        }

        printf("A zona segura foi encontrada!\n");
    }
}
/*void final(int vivo, char campo[GRU][GRU], int c, int l)
{
    if (vivo == 1)
    {
        printf("\n\n________________________________\n");
        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (campo[i][j] == 'R')
                {
                    printf("\033[0;31m%c\033[0m", campo[i][j]);
                }
                else if (campo[i][j] == 'H')
                {
                    printf("\033[0;33m%c\033[0m", campo[i][j]);
                }
                else if (campo[i][j] == 'Z')
                {
                    printf("\033[0;33m%c\033[0m", campo[i][j]);
                }
                else
                {
                    printf("%c", campo[i][j]);
                }
            }
            printf("\n");
        }

        printf("A zona segura foi encontrada!\n");
    }
}*/
int main()
{
    char campo[GRU][GRU];
    int l, c, r, l1, c1, pilhax[BBB], pilhay[BBB], topo = -1, visitado, x, y, rob, vivo;
    printf("insira o tamanho da matriz (máximo [%d][%d]):\n", GRU, GRU);
    scanf("%d %d", &l, &c);
    espaço(c, l, campo);
    printf("Quantos Robôs terão no campo?(Máximo %d)\n", rob = (l * c) - 2);
    scanf("%d", &r);
    info(r, l, l1, c, c1, campo);
    fuga_humana(pilhax, pilhay, topo, c, l, campo, x, y);

    return 0;
}