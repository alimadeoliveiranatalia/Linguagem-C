// Fa�a um programa em C para ler o sal�rio de um funcionario e aumenta-lo em 15%. Ap�s o aumento, desconte 8% de impostos. Imprima o sal�rio inicial, o sal�rio
// com o aumento e o sal�rio final.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario,salario_com_aumento,salario_com_imposto;
	printf("Informe seu sal�rio: ");
		scanf("%f",&salario);
	printf("\n Seu sal�rio inicial � %.2f",salario);
	salario_com_aumento=salario+salario*0.15;
	printf("\n Seu sal�rio teve um aumento de 15%, agora voc� passa a receber %.2f",salario_com_aumento);
	salario_com_imposto=salario_com_aumento+salario_com_aumento*0.08;
	printf("\n Por�m voc� teve um desconto de 8%, seu sal�rio final � %.2f",salario_com_imposto);
}
