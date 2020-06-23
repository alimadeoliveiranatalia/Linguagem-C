#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,j,a[3][3],b[3][3],c[3][3];
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("\n Informe um valor para a posição aij(%d,%d): ",i,j);
			scanf("%d",&a[i][j]);			
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("\n Informe um valor para a posição bij(%d,%d): ",i,j);
			scanf("%d",&b[i][j]);			
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			c[i][j]=a[i][j]+b[i][j];			
		}
	}
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("\n C[%d]",c[i][j]);			
		}
	}
}
