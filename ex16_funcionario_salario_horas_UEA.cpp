// Uma empresa paga R$10,00 por hora normal trabalhada e R$15,00 por hora extra. Fa�a um programa em C para calcular e imprimir o sal�rio bruto e o sal�rio l�quido
// de um determinado funcion�rio. Considere que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float horas_normais,horas_extras,salario_bruto, salario_liquido;
	
		printf("\n Informe a quantidade de horas normais trabalhadas: ");
			scanf("%f",&horas_normais);
		printf("\n Informe a quantidade de horas extras trabalhadas: ");
			scanf("%f",&horas_extras);
			salario_bruto=horas_normais*10.0+horas_extras*15.0; 
			salario_liquido=salario_bruto-0.1;
		printf("\n Seu sal�rio bruto � R$%.2f",salario_bruto);
		printf("\n Seu sal�rio liquido � R$%.2f",salario_liquido);
		
}
