/*Criar um programa que leia e armazene os elementos de uma matriz inteira M10x10 e imprimi-la. 
Troque, na ordem a seguir:
- a segunda linha pela oitava linha;
- a quarta coluna pela décima coluna;*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[10][10],i,j;
	printf("Informe os valores da matriz");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
}
