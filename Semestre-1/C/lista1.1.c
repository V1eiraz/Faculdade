// primeira lista de exercícios
// primeira questão
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float x = 0, pi = M_PI, sen = 0, fator = 1, result, n, x2;
    int x1, z = 1, a = 0, i, n1;

    printf("Informe o angulo que deseja saber o seno:\n");
    scanf("%f", &x);
    printf("Informe o numero de termos a serem calculados:\n");
    scanf("%f", &n);

    x1 = x;        // guardando o valor de x pro final
    n1 = n;        // guardando o valor de n pro final
    x *= pi / 180; // tranformando grau em radianos
    x2 = x;        // guardando o valor de x em radianos

    for (i = 1; i <= n; i++)
    {

        if (i % 2 != 0)
        { // se i for par vou transformalo em negativo
            x2 = pow(x, 1 + a);
        }
        else
        {
            x2 = pow(x, 1 + a) * (-1);
        }
        for (z = a + 1; z > 0; z--)
        { // fazendo o fatorial

            fator *= z;
        }
        sen += x2 / fator; // juntando as expressões
        a += 2;            // aumentando o valor de a em 2
        x2 = x;            // voltando para o valor inicial para continuar no looping
        }

    result = sen - sin(x);

    printf("O valor do seno de %d graus calculado com a função sin(x) eh %f\n", x1, sin(x));
    printf("O valor do seno de %d graus calculado com %d termos eh %f.\n", x1, n1, sen);
    printf("E a diferença entre o valor calculado com %d termos e o valor da função sin(X) eh %f.\n", n1, result);
    return 0;
}