//Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um
//programa em C que receba o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e
//mostre a comiss�o e o sal�rio final do funcion�rio.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float vendas,salario_bruto,comisao_das_vendas,salario_com_comisao;
	printf("\n Informe seu sal�rio bruto: ");
		scanf("%f",&salario_bruto);
	printf("\n Informe quanto de vendas foram feitas: ");
		scanf("%f",&vendas);
	comisao_das_vendas=vendas*0.04;
	salario_com_comisao=salario_bruto+comisao_das_vendas;
	printf("\n A comiss�o de suas vendas foi de R$%.2f",comisao_das_vendas);
	printf("\n Seu sal�rio final � de R$%.2f",salario_com_comisao);
	
}
