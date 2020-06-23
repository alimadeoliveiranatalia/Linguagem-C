//Elaborar um algoritmo que:
// a) Calcule e escreva o valor da série abaixo com precisão menor que um décimo de milionésimo (0,0000001);
// b) Indique quantos termos foram usados.
// S = 63 + 61/1! + 59/2! + 57/3! + ...
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,ate,n,fat,termo_geral_pa;
	double s,somatorio;
	printf("\n Informe quantos termos gostaria de somar " );
		scanf("%d",&ate);
		n=63;
		fat=1;
		somatorio=0;
	for (i=1;i<=ate;++i){
		fat=fat*i;
		printf("\n para i=%d fat=%d",i,fat);
		termo_geral_pa=n+(2-2*n);
		printf("\n para i=%d termo geral=%d",i,termo_geral_pa);
		s=termo_geral_pa/fat;
		printf("\n para i=%d s=%lf",i,s);
		somatorio=somatorio+s;
		
	}
	printf("\n Para %d termos a soma é: %lf",ate,somatorio);
	
}
