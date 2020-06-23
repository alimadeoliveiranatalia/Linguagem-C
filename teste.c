#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float sf, vendas, comisao, sn;
	
	printf("Informe seu salário fixo, por favor.");
		scanf("%f",&sf);
	printf("Informe as vendas que voce obteve este mês, por favor.");
		scanf("%f",&vendas);
	comisao = (vendas*4)/100;
	sn = sf+comisao;
	printf("Sua comissão este mes foi de R$ %f", comisao);
	printf("Seu salário este mes é de R$ %f", sn);
	
	
	return 0;
}
