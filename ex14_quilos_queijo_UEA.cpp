// Uma lanchonete vende apenas um tipo de sanduiche, cujo recheio inclui duas fatias de queijo, uma fatia de presunto e uma carne de hambúrguer. 
//Sabendo que cada fatia de queijo ou presunto pesa 20 gramas, e que a carne de hambúrguer pesa 100g, faça um programa em C em que o dono forneça
// a quantidade de sanduiches a fazer e a máquina informe as quantidades (em quilos) de queijo, presunto e carne necessários para compra.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int quant_sanduiches;
	float kilo_queijo,kilo_presunto,kilo_carne;
	printf("\n Informe a quantidade de sanduiches : ");
		scanf("%d",&quant_sanduiches);
	kilo_queijo=quant_sanduiches*0.02;
	kilo_presunto=quant_sanduiches*0.02;
	kilo_carne=quant_sanduiches*0.1;
	printf("\n Para %d sanduiches, você vai precisar comprar:",quant_sanduiches);
	printf("\n %.2f kg de queijo",kilo_queijo);
	printf("\n %.2f kg de presunto",kilo_presunto);
	printf("\n %.2f kg de carne",kilo_carne); 
}
