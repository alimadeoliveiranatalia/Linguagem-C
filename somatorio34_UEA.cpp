// Fazer um algoritmo que calcule e escreva o valor de S no seguinte somatório:
// S = 1/225 -2/196 + 4/169 - 8/144 + ... + 16384/1
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	int i, n,j;
	double seq,soma;
	j=1;
	i=0;
	soma=0;
	for(n=15;n>=1;--n){
		seq=pow(2,i)*pow(-1,j+1)/pow(n,2);
		soma=soma+seq;
		i=i+1;
		j=j+1;
		printf("\n para i = %d , j = %d , n =%d temos seq = %lf e soma parcial = %lf",i,j,n,seq,soma);
	}
	//printf("\n O somatório resulta em: %lf",soma);
	}
