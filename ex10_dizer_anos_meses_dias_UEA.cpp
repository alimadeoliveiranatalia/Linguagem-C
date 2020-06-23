// Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um programa em C para converter esse tempo em anos, messes e dias. Assuma que cada mês possui
// sempre 30 dias
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int dias=0;
	float quant_dias, quant_mes=0,quant_anos;
	printf("Informe a quantidade de dias em que não foram registrados acidentes: " );
		scanf("%d",&dias);
		quant_dias=dias-365;
		quant_mes=(dias)/30;
		quant_anos=quant_mes/12;
	printf("Quantidade em anos: %.1f",quant_anos);
	printf("Quantidade em meses: %.1f",quant_mes);
	printf("Quantidade em dias: %.1f",quant_dias);
	
}
