// Fa�a um programa em C que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e mostre a quantidade
// de sal�rios m�nimos que ganha esse funcion�rio.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario_funcionario,quant_salmin;
	printf("\n Informe seu sal�rio: ");
		scanf("%f",&salario_funcionario);
	quant_salmin=salario_funcionario/998.00;
	printf("\n Voc� recebe em m�dia %.0f sal�rios m�nimos",quant_salmin);
}
