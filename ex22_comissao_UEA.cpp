//Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um
//programa em C que receba o salário fixo de um funcionário e o valor de suas vendas, calcule e
//mostre a comissão e o salário final do funcionário.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float vendas,salario_bruto,comisao_das_vendas,salario_com_comisao;
	printf("\n Informe seu salário bruto: ");
		scanf("%f",&salario_bruto);
	printf("\n Informe quanto de vendas foram feitas: ");
		scanf("%f",&vendas);
	comisao_das_vendas=vendas*0.04;
	salario_com_comisao=salario_bruto+comisao_das_vendas;
	printf("\n A comissão de suas vendas foi de R$%.2f",comisao_das_vendas);
	printf("\n Seu salário final é de R$%.2f",salario_com_comisao);
	
}
