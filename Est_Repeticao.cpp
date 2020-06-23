 // Programa que conta até 10
#include<stdio.h> // inclusão da biblioteca que que comanda a entrada/saída de dados
#include<conio.h> // inclusão da biblioteca para manipuação de caracteres.
main() // Inicio do programa
{
	int i; // declaração do contador de laços
	printf("\n Utilizando FOR:");
	for(i=1;i<=10;i++) // inicia em 1 até 10 no passo de 1 em 1
	{
		printf("\n %d",i); // mostre i
	}
	
	printf("\n Utilizando WHILE:");
	i=1; // inicia o contador 
	while (i<=10){
		printf("\n %d",i);
		i++; // incrementa o contador p/ não ficar em loop infinito
	}
	
	printf( "\n Utilizando DO WHILE:");
	i=1;
	do{
		printf("\n %d",i);
		i++;		
	}
	while(i<=10);
	getch(); // função que lê o caracter mas não mostra na tela.
	return(0);
}
