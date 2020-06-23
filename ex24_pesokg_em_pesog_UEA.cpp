//Faça um programa em C que receba o peso de uma pessoa em quilos, calcule e mostre
//esse peso em gramas.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float peso_kg,peso_g;
	printf("\n Informe seu peso em kg: ");
		scanf("%f",&peso_kg);
	peso_g=peso_kg*1.000;
	printf("\n Seu peso em kg equivale à %.3f g",peso_g);
}
