// Fazer um algoritmo que calcule e escreva a soma dos 50 termos da série:
// S = 1000/1 - 997/2 + 994/3 - 991/4 + ...
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	int i,n;
	double seq, soma;
	n=1000;
	soma=0;
	for (i=1; i<=50; ++i){
		seq=pow(-1,i+1)*n/i;
		soma=soma+seq;
		n=n-3;
		//printf("\n Para i=%d , seq=%lf, soma parcial=%lf",i,seq,soma);		
	}
	printf("\n Para %d termos, a soma é: %lf",i-1,soma);
}
