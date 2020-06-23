/*Entrar com valores inteiros para um matriz A 4x4 e para uma matriz B 4x4. Gerar e imprimir a SOMA (A+B).*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[4][4],b[4][4],c[4][4],i,j;
	printf("Informe valores para a Matriz A:");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Informe valores para a Matriz B:");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Matriz soma:");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("%d",c[i][j]);
		}
	}
}
