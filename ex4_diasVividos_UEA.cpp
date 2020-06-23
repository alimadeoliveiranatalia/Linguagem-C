// Escreva um programa em C para ler o nome e a idade de uma pessoa e exibir quantos dias de vida ela possui. Considere sempre anos completos e que um ano possui 365 dias 
// EX.: Uma pessoa com 19 anos possui 6935 dias de vida, MARIA VOCÊ JÁ VIVEU 6935 DIAS.
#include<stdio.h>
main(){
	int idade,dias_vividos;
	char nome[15]; // vetor de caracteres
	printf("\n Informe seu nome ");
		gets(nome);//gets: comando para capturar strings
	printf("\n Informe sua idade ");
	printf(nome);
		scanf("%d",&idade);
	dias_vividos = idade*365;
	printf(nome);
	printf("\n voce ja viveu %d",dias_vividos);
	
}
