#include <stdio.h>
#include <stdlib.h>

/* Calcular a media ponderada de 3 notas*/

int main(int argc, char *argv[]) {
	float nota1,nota2,nota3,peso1,peso2,peso3, media;
	peso1=1;
	peso2=2;
	peso3=3;
	printf("Informe a primeira nota");
		scanf("%f",&nota1);
	printf("Informe a segunda nota");
		scanf("%f",&nota2);
	printf("Informe a terceira nota");
		scanf("%f",&nota3);
	media=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
	printf("A sua média foi de:%f",media);	

	return 0;
}
