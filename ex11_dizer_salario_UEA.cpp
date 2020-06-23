// Faça um programa em C para ler o salário de um funcionario e aumenta-lo em 15%. Após o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário
// com o aumento e o salário final.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario,salario_com_aumento,salario_com_imposto;
	printf("Informe seu salário: ");
		scanf("%f",&salario);
	printf("\n Seu salário inicial é %.2f",salario);
	salario_com_aumento=salario+salario*0.15;
	printf("\n Seu salário teve um aumento de 15%, agora você passa a receber %.2f",salario_com_aumento);
	salario_com_imposto=salario_com_aumento+salario_com_aumento*0.08;
	printf("\n Porém você teve um desconto de 8%, seu salário final é %.2f",salario_com_imposto);
}
