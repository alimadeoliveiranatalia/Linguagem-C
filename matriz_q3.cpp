/* Entrar com valores para uma matriz A 3x4. Gerar e imprimir uma matriz B que é o triplo da matriz A.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[3][4],i,b[3][4],j;
	printf("Informe os valores para a matriz: ");
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			scanf("%d",&a[3][4]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			b[i][j]=3*(a[i][j]);
		}
	}
	printf("A matriz triplo é:");
	for(i=0;i<3;i++){
		for(j=0;i<4;j++){
			printf("%d",b[i][j]);
		}
	}
}
