// Uma Fabrica de camisetas produz os tamanhos pequenos, m�dio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um programa em C em que o usu�rio forne�a 
// a quantidade de camisetas pequenas, m�dias e grandes referentes a uma venda e a m�quina informe quanto ser� o valor arrecadado.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int quant_p,quant_m,quant_g;
	float venda_arrecadada;
	printf("Informe quantas camisetas pequenas voc� deseja: ");
		scanf("%d",&quant_p);
	printf("Informe quantas camisetas m�dias voc� deseja: ");
		scanf("%d",&quant_m);
	printf("Informe quantas camisetas grandes voc� deseja: ");
		scanf("%d",&quant_g);
	venda_arrecadada=quant_p*10+quant_m*12+quant_g*15;
	printf("Sua venda ser� de R$%.2f",venda_arrecadada);
	
		
}
