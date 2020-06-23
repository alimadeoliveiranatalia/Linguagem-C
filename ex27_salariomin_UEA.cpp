// Faça um programa em C que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e mostre a quantidade
// de salários mínimos que ganha esse funcionário.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario_funcionario,quant_salmin;
	printf("\n Informe seu salário: ");
		scanf("%f",&salario_funcionario);
	quant_salmin=salario_funcionario/998.00;
	printf("\n Você recebe em média %.0f salários mínimos",quant_salmin);
}
