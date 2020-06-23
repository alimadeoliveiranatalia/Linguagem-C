// Fazer um algoritmo que calcule e escreva a soma dos 50 primeiros termos da série:
// S = 1!/1 - 2!/3 + 3!/7 - 4!/15 + 5!/31 - ...
#include<stdio.h>
#include<locale.h>
#include<math.h>
main(){
	setlocale(LC_ALL,"");
	int i,numerador,denominador;
	double fat,s,somatorio;
	fat=1;
	somatorio=0;
	for (i=1;i<=50;++i){
		fat=fat*i;
		numerador=(pow(-1,i+1)*fat);
		denominador=((pow(2,i))-1);
		printf("\n %d/%d",numerador,denominador);
		s=(double)numerador/(double)denominador;
		somatorio=somatorio+s;
		printf("\n para i= %d, valor da sequencia = %lf",i,s);
				
	}
	printf("\n A soma dos %d primeiros termos é %lf",i-1,somatorio);
}
