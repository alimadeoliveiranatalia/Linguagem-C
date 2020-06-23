//Elabore um algoritmo que calcule N! (fatorial de N),
//sendo que o valor inteiro de N é fornecido pelo
//usuário. Sabendo que:
//• N! = 1 x 2 x 3 x ... x (N-1) x N;
//• 0! = 1, por definição.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,n,fat;
	double fatorial;
	printf("\n Informe um número que gostaria de saber seu fatorial? ");
		scanf("%d",&n); // 'n' armazena o valor do fatorial que se quer obter
	if (n==0){ // caso o valor de 'n' seja 0 vai ser imprimido o valor 0!=1.
		printf("\n 0!=1");
	}
	else{// caso o valor de 'n' seja diferente de 0:
			fatorial=1;
			for (i=0;i<n;++i){
			fatorial*=(n-i);}//A variável 'fatorial'=fatorial*(n-i)
			printf("\n %d! = %lf",n,fatorial);
		}
	
}
