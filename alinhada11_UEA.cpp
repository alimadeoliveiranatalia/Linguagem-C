//Escreva um programa em C para ler dois valores e uma das seguintes opera��es a serem
//executadas (codificadas da seguinte forma: 1 � Adi��o, 2 � Subtra��o, 3 � Multiplica��o e 4 �
//Divis�o). Calcular e escrever o resultado dessa opera��o sobre os dois valores lidos. Nota:
//testar a entrada no caso de divis�o por zero!
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int opcao;
	float vl1,vl2,soma,diferenca,multi,div;
	printf("\n Escola uma das op��es que gostaria de realizar:");
	printf("\n 1. Adi��o");
	printf("\n 2. Subtra��o");
	printf("\n 3. Multiplica��o");
	printf("\n 4. Divis�o");
		scanf("%i",&opcao);
	printf("\n Informe um valor: ");
		scanf("%f",&vl1);
	printf("\n Informe um segundo valor: ");
		scanf("%f",&vl2);
	if (opcao==1){
		soma=vl1+vl2;
		printf("\n A soma � %f",soma);
	}
	if (opcao==2){
		if (vl1>vl2){
			diferenca=vl1-vl2;
			printf("\n A diferen�a � %f",diferenca);
		}
		else{
			diferenca=vl2-vl1;
			printf("\n A diferen�a � %f",diferenca);
		}
	}
	if (opcao==3){
		multi=vl1*vl2;
		printf("\n O produto �: %f",multi);
	}
	if (opcao==4){
		if (vl1>vl2 && vl2!=0){
			div=vl1/vl2;
			printf("\n O quociente � %f",div);
		}
		if (vl1<vl2 && vl1!=0){
			div=vl2/vl1;
			printf("\n O quociente � %f",div);
		}
	}
}
