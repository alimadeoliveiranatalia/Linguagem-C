/*Escreva um programa que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, 
colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[10],b[10],c[10],i;
	printf("\n Informe valores para o vetor A: ");
	for(i=0;i<10;i++){ /* adicionando elementos no vetor 'a'*/
		int valora;
		scanf("%d",&valora);
		a[i]=valora;
	}
	printf("\n Informe valores para o vetor B: ");
	for(i=0;i<10;i++){ /* adicionando elementos no vetor 'b'*/
		int valorb;
		scanf("%d",&valorb);
		b[i]=valorb;
	}
	for(i=0;i<10;i++){ /* adicionando elementos no vetor 'c'*/
		c[i]=(a[i])*(b[i]);
	}
	for(i=0;i<10;i++){
		printf("C:[%d]",c[i]); /* exibindo na tela elementos do vetor 'c'*/
	}
	
}
