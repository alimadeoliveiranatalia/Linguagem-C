//Fa�a um programa em C que calcule e mostre a �rea de um trap�zio. Sabe-se que: A = (base maior + base menor)* altura)/2 ;
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float base_maior,base_menor,altura,area_trapezio;
	printf("\n Informe a base maior do Trap�zio: ");
		scanf("%f",&base_maior);
	printf("\n Informe a base menor do Trap�zio: ");
		scanf("%f",&base_menor);
	printf("\n Informe a altura do Trap�zio: ");
		scanf("%f",&altura);
	area_trapezio=((base_maior+base_menor)*altura)/2;
	printf("\n A �rea deste Trap�zio � %.2f metros quadrados.",area_trapezio);
}
