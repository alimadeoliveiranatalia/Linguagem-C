// Uma padaria vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. Cada p�ozinnho custa R$0,12 e uma broa custa R$1,50. Ao final do dia, o dono quer saber
// quanto arrecadou com a venda dos p�es e broas (juntos) e quanto deve guardar numa conta de poupan�a(10% do total arrecadado). Voc� foi contratado para fazer os c�lculos para o dono.
// Com base nestes c�lculos, fa�a um programa em C para ler as quantidades de p�es e de broas e depois calcular os dados solicitados.
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
