// Fa�a um programa em C que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado;
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float lado,area;
	printf("\n Informe a medida do lado do quadrado: ");
		scanf("%f",&lado);
	area=lado*lado;
	printf("A �rea deste quadrado � de %f metros quadrados",area);
}
