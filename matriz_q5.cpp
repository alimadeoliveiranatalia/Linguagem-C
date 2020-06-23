/*Ler uma matriz 4x5 de inteiros, calcular e imprimir a soma de todos os seus elementos.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[4][5],i,j,valor,soma=0;
	printf("Informe valores para a matriz A:");
	for (i=0;i<4;i++){
		for (j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<4;i++){
		for (j=0;j<5;j++){
			valor=a[i][j];
			soma=soma+valor;
		}
	}
	printf("A soma dos elementos é: %d",soma);
}
