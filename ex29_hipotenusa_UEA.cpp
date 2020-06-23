// Faça um programa em C que receba o valor dos catetos de um triângulo, calcule e mostre o
// valor da hipotenusa.
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	float cat1,cat2,hipotenusa;
	printf("Informe o cateto do triangulo: ");
		scanf("%f",&cat1);
	printf("Informe o outro cateto do triangulo: ");
		scanf("%f",&cat2);
	hipotenusa=sqrt(cat1*cat1+cat2*cat2);
	printf("\n A hipotenusa desse triângulo é %.2f",hipotenusa);
	
}
