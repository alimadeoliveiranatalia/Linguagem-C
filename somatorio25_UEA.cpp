// Fazer um algoritmo que calcule e escreva a seguinte soma:
// S = 2^1/50 + 2^2/49 + 2^3/48 + ... + 2^50/1
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	int i,n;
	double seq,soma;
	n=51;
	soma=0;
	for (i=1;i<50;++i){
		seq=pow(2,i)/n;
		soma=soma+seq;
		n=n-1;
		//printf("\n Para i= %d , n=%d , seq = %lf e soma parcial = %lf ",i,n,seq,soma);
	}
	printf("\n A soma de %d termos é : %lf",i,soma);
}
