//Um restaurante cobra R$12,00 por cada quilo de refei��o. Escreva um programa em C que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma 
// que a balan�a j� desconte o peso do prato
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float peso_da_comida, preco_da_refeicao;
	printf("Informe o peso da comida em quilogramas (1kg = 1000g): ");
		scanf("%f",&peso_da_comida);
	preco_da_refeicao=peso_da_comida*12;
	printf("Sua refei��o custa R$ %.2f",preco_da_refeicao);
}
