// Uma padaria vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinnho custa R$0,12 e uma broa custa R$1,50. Ao final do dia, o dono quer saber
// quanto arrecadou com a venda dos pães e broas (juntos) e quanto deve guardar numa conta de poupança(10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono.
// Com base nestes cálculos, faça um programa em C para ler as quantidades de pães e de broas e depois calcular os dados solicitados.
#include<stdio.h>
main(){
	int quant_paes, quant_broas, quant_paes_broas;
	float arrecada_paes, arrecada_broas, arrecada_total,vai_pra_poupanca;
	printf("\n Quantos paes voce vendeu hoje ? ");
		scanf("%d",&quant_paes);
	printf("\n Quantas broas voce vendeu hoje ?  ");
		scanf("%d",&quant_broas);
	arrecada_paes=quant_paes*(0.12);
	arrecada_broas=quant_broas*(1.50);
	arrecada_total=arrecada_paes+arrecada_broas;
	vai_pra_poupanca=arrecada_total*(0.1);
	printf("\n Voce arrecadou %f com a venda de paes e broas",arrecada_total);
	printf("\n Voce deve guardar R$ %f ",vai_pra_poupanca);
	
}
