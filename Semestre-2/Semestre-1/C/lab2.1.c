#include<stdlib.h>
#include<stdio.h>

int main(){
    int N1, N2, N3, N4;
    float media;

printf("Me informe as 4 notas bimestrais: \n");
    scanf("%d %d %d %d", &N1, &N2, &N3, &N4);
media = (N1+N2+N3+N4)/4;

    printf("A media das notas e: %2f \n", media);

}