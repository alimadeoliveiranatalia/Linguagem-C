// Uma Fabrica de camisetas produz os tamanhos pequenos, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um programa em C em que o usuário forneça 
// a quantidade de camisetas pequenas, médias e grandes referentes a uma venda e a máquina informe quanto será o valor arrecadado.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int quant_p,quant_m,quant_g;
	float venda_arrecadada;
	printf("Informe quantas camisetas pequenas você deseja: ");
		scanf("%d",&quant_p);
	printf("Informe quantas camisetas médias você deseja: ");
		scanf("%d",&quant_m);
	printf("Informe quantas camisetas grandes você deseja: ");
		scanf("%d",&quant_g);
	venda_arrecadada=quant_p*10+quant_m*12+quant_g*15;
	printf("Sua venda será de R$%.2f",venda_arrecadada);
	
		
}
