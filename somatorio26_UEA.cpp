// Fazer um algoritmo para calcular e escrever a soma:
// S = 37x38/1 + 36x37/2 + 35x36/3 + ...+ 1x2/37
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	int i,n;
	double seq,soma;
	n=38;
	soma=0;
	for (i=1;i<=37;++i){
		seq=(n-1)*n/i;
		soma=soma+seq;
		n=n-1;
		//printf("\n Para i=%d, n=%d, seq=%lf e soma parcial=%lf",i,n,seq,soma);	
	}
	printf("\n Para %d termos, a soma é: %lf",i-1,soma);
}
