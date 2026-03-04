#include<stdio.h>
#include<stdlib.h>

int  main(){
    int alun, ida, maior = 0, i = 1;
    float menor = 0;

    printf("Me informe  a quantidade de alunos\n");
        scanf("%d", &alun);
    
        while(i <= alun){
            printf("Insira a idade dos alunos\n");
                scanf("%d",&ida);

                if(ida < 18){
                    menor++;
                }
                if(ida > maior){
                    maior = ida;
                }
                i++;
            
        }

        printf("A numero de alunos menores de idade e %.0f , que representa %.2f%% do total de alunos.\n", menor, menor/alun*100 );
        printf("A idade do aluno mais velho e : %d\n", maior);
    return 0;
}