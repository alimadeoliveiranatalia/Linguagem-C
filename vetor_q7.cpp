/*7) Escreva um programa que leia 2 vetores X(10) e Y(10) e os escreva. Crie, a seguir, um vetor P, que seja:
a. A uni�o de X com Y 
b. A diferen�a entre X e Y
c. A soma entre X e Y
d. O produto entre X e Y
Escreva o vetor P a cada opera��o.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int x[10],y[10],p[50],n[50],i,valor;
	printf("\n Informe valores para o vetor X: ");
	for(i=0;i<10;i++){
		scanf("%d",&valor);
		x[i]=valor;
	}
	printf("\n Informe valores para o vetor Y: ");
	for(i=0;i<10;i++){
		scanf("%d,",&valor);
		y[i]=valor;
	}
	printf("\n Vetor Uni�o: ");
	for(i=0;i<10;i++){
		p[i]=x[i];
		n[i]=y[i];
		printf("%d,%d,",p[i],n[i]);
	}
	printf("\n Vetor diferen�a: ");
	for(i=0;i<10;i++){
		p[i]=x[i]-y[i];
		printf("%d,",p[i]);
	}
	printf("\n Vetor soma: ");
	for(i=0;i<10;i++){
		p[i]=x[i]+y[i];
		printf("%d,",p[i]);
	}
	printf("\n Vetor produto: ");
	for(i=0;i<10;i++){
		p[i]=x[i]*y[i];
		printf("%d,",p[i]);
	}
}
