// Uma fábrica de refrigerantes vendeu seu produto em três formatos: lata de 350ml, garrafa de 600ml e garrafa de 2l. Se um comerciante compra uma determinada
// quantidade de cada formato, faça um programa em C para calcular quantos litros de refrigerante ele comprou.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int quant_350ml,quant_600ml,quant_2l;
	float litro_de_350ml, litro_de_600ml,quant_litro_total;
	printf("\n Informe a quantidade de refrigerantes de 350ml você quer:");
		scanf("%d",&quant_350ml);
	printf("\n Informe a quantidade de refrigerantes de 600ml você quer:");
		scanf("%d",&quant_600ml);
	printf("\n Informe a quantidade de refrigerantes de 2l você quer:");
		scanf("%d",&quant_2l);
		litro_de_350ml=0.35*quant_350ml;
		litro_de_600ml=0.6*quant_600ml;
		quant_litro_total=litro_de_350ml+litro_de_600ml+quant_2l;
	printf("\n A sua quantidade em litros total é de %f litros",quant_litro_total);
		
}
