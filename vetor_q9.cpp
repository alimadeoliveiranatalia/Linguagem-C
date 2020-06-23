/* 9) Dado um vetor V de 100 posições de números reais, calcular o valor de S abaixo:
	S=(v[1]-v[100])^2+(v[2]-v[99])^2+(v[3]-v[98])^2+...+(v[51]-v[50])^2 */
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	int v[100], i,seq,soma=0,n=100;
	for(i=0;i<100;i++){ /* Preenchendo o vetor */
		v[i]=i;
		printf("\n v[%d] = %d",i,v[i]);
	}
	for(i=0;i<50;i++){
		seq=pow((v[i]-v[n-1]),2);
		n=n-1;
		printf("\n n=%d, seq[%d] = %d, soma[%d]= %d",n,i,seq,i,soma);
		soma=soma+seq;
	}
	printf("\n A soma é: %d",soma);
}
