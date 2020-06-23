//Escreva um programa em C para ler dois valores e uma das seguintes operações a serem
//executadas (codificadas da seguinte forma: 1 – Adição, 2 – Subtração, 3 – Multiplicação e 4 –
//Divisão). Calcular e escrever o resultado dessa operação sobre os dois valores lidos. Nota:
//testar a entrada no caso de divisão por zero!
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int opcao;
	float vl1,vl2,soma,diferenca,multi,div;
	printf("\n Escola uma das opções que gostaria de realizar:");
	printf("\n 1. Adição");
	printf("\n 2. Subtração");
	printf("\n 3. Multiplicação");
	printf("\n 4. Divisão");
		scanf("%i",&opcao);
	printf("\n Informe um valor: ");
		scanf("%f",&vl1);
	printf("\n Informe um segundo valor: ");
		scanf("%f",&vl2);
	if (opcao==1){
		soma=vl1+vl2;
		printf("\n A soma é %f",soma);
	}
	if (opcao==2){
		if (vl1>vl2){
			diferenca=vl1-vl2;
			printf("\n A diferença é %f",diferenca);
		}
		else{
			diferenca=vl2-vl1;
			printf("\n A diferença é %f",diferenca);
		}
	}
	if (opcao==3){
		multi=vl1*vl2;
		printf("\n O produto é: %f",multi);
	}
	if (opcao==4){
		if (vl1>vl2 && vl2!=0){
			div=vl1/vl2;
			printf("\n O quociente é %f",div);
		}
		if (vl1<vl2 && vl1!=0){
			div=vl2/vl1;
			printf("\n O quociente é %f",div);
		}
	}
}
