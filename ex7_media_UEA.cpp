// Faça um programa em C para ler três notas de um aluno em uma disciplina e imprimir a sua média aritmética ponderada (as notas têm pesos respectivos de 1,2,3)
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float nota1,nota2,nota3,media;
	printf("Informe a primeira nota");
		scanf("%f",&nota1);
	printf("Informe a segunda nota");
		scanf("%f",&nota2);
	printf("Informe a terceira nota");
		scanf("%f",&nota3);
	media=(nota1*1+nota2*2+nota3*3)/(1+2+3);
	printf("Sua média foi de: %.2f",media);
	
}
