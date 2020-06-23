// Uma granja possui um controle automatizado de cada frango da sua produção. No pé direito
//do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para indicar
//o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel
//de alimento custa R$3,50, faça um programa em C para calcular o gasto total da granja para
//marcar todos os seus frangos.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int quant_frangos;
	float quant_chip, quant_anel_alimento,gasto_total;
	printf("\n Informe a quantidade de frangos: ");
		scanf("%d",&quant_frangos);
	quant_chip=quant_frangos*4.00;
	quant_anel_alimento=2*quant_frangos*3.50;
	gasto_total=quant_chip+quant_anel_alimento;
	printf("\n Seu gasto será de R$%.2f para automatizar sua granja.",gasto_total);
}
