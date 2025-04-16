#include<stdio.h>
#define texto "Entrada e saida de dados."
int main(){
	int idade = 0;
	float peso = 0.0;
	char nome[50]="";
	
	printf ("%s\n",&texto);
	printf ("Me informe sua idade:\n");
		scanf ("%d",&idade);
		
	printf ("Me informe seu peso:\n");
		scanf ("%f",&peso);

	printf ("Por ultimo, me informe seu nome:\n");
		scanf ("%s",&nome);

	printf ("Obrigado!\n");
	printf ("Para confirmar, voce tem %d anos, ",idade);
	printf ("%.2f kg",peso);
	printf (" e se chama %s.",nome);
return 0;
}