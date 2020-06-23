// 12) Calcular somatorio
// Pergunta: quantas vezes executa a fórmula?
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,j;
	double somatorio,somi,a,sol;
	somi=0;
	for(i=0;i<=7;++i){
		somi=somi+i;// a variável 'somi' acumula os valores dos
		printf("\n %lf",somi);}
	sol=0;
	for(j=0;j<=7;++j){
		somatorio=((2*j+1)/(double)(2*j+5));
			printf("\n %lf",somatorio);
			sol=somatorio+sol;
	}
	a=somi*sol;
	printf("\n O resultado da série corresponde a %lf",a);
}
