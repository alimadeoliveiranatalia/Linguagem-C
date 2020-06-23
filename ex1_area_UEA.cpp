// Faça um programa em C para ler as dimensões de um terreno e depois exibir a area do terreno
#include<stdio.h>
main(){
	float altura,largura,area;
	printf("\n Informe a altura do seu terreno");
		scanf("%f",&altura);
	printf("\n Informe a largura do seu terreno");
		scanf("%f",&largura);
	area=altura*largura;
	printf("\n A area do seu terreno e: %f",area);
}
