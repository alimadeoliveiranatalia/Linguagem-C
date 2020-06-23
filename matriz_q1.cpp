/* Criar um programa que leia os elementos de uma matriz inteira 10 x 10 e escreva os
elementos da diagonal principal.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int m[10][10], v[10];
	int i,j;
	printf("\n Informe os elementos para a matriz: ");
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for (i=0;i<10;i++){
		for(j=0;j<10;j++){
			if (i==j){
			v[i]=m[i][j];
			}
		}
	}
	printf("Diagonal Principal:");
	for(i=0;i<10;i++){
		printf("%d",v[i]);
	}
}
