#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,j, numerador=63;
	double seq, soma,fat;
	soma=0;
	for (i=1;i<=150;i++){
		numerador=numerador-2;
		fat=1;
		for(j=1;j<=i;j++){
			fat=fat*j;
		
		}
		seq=numerador/fat;
		soma=soma+seq;
		printf("\n sequência: %d/%lf = %lf soma no laço %d é: %lf",numerador,fat,seq,i,soma);
	}
	printf("\n o valor dos %d termos é: %lf,i-1,soma+63");
	
}
