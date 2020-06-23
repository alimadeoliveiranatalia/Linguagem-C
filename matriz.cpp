#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,j,m[3][3];
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("\n Informe um valor para a posição aij(%d,%d): ",i,j);
			scanf("%d",&m[i][j]);			
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("\n [%d]",m[i][j]);			
		}
	}
}
