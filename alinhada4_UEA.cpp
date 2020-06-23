//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
//programa em C em que calcule peso ideal, utilizando as seguintes
//formulas:
// Para homens: (72.7*h) ¡V 58
// Para mulheres: (62.1*h) - 44.7
// Onde h equivale a altura da pessoa.
#include<stdio.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"");
	float altura,peso_ideal;
	char sexo[15];
	printf("\n Informe seu sexo: ");
		gets(sexo);
	printf("\n Informe sua altura, por favor: ");
		scanf("%f",&altura);
	if (strcmp(sexo,"masculino")==0){
		peso_ideal=altura*72.7;
		printf("\n para homens seu peso ideal é de %.2f kg",peso_ideal);
	}
	else {
		peso_ideal=altura*62.1;
		printf("\n Para mulheres seu peso ideal é de %.2f kg",peso_ideal);
	}
}
