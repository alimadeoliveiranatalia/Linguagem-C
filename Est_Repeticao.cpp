 // Programa que conta at� 10
#include<stdio.h> // inclus�o da biblioteca que que comanda a entrada/sa�da de dados
#include<conio.h> // inclus�o da biblioteca para manipua��o de caracteres.
main() // Inicio do programa
{
	int i; // declara��o do contador de la�os
	printf("\n Utilizando FOR:");
	for(i=1;i<=10;i++) // inicia em 1 at� 10 no passo de 1 em 1
	{
		printf("\n %d",i); // mostre i
	}
	
	printf("\n Utilizando WHILE:");
	i=1; // inicia o contador 
	while (i<=10){
		printf("\n %d",i);
		i++; // incrementa o contador p/ n�o ficar em loop infinito
	}
	
	printf( "\n Utilizando DO WHILE:");
	i=1;
	do{
		printf("\n %d",i);
		i++;		
	}
	while(i<=10);
	getch(); // fun��o que l� o caracter mas n�o mostra na tela.
	return(0);
}
