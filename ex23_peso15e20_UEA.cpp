//Faça um programa em C que receba o peso de uma pessoa, calcule e mostre:
//a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
//b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float peso,peso_em15,peso_em20;
	printf("\n Informe seu peso: ");
		scanf("%f",&peso);
		peso_em15=peso*(0.15);
		peso_em20=peso*(0.2);
	printf("\n Se você engordar 15 por cento do seu peso, seu peso será de %.2f kg",peso_em15+peso);
	printf("\n Se você engordar 20 por cento do seu peso, seu peso será de %.2f kg",peso_em20+peso);
	
}
