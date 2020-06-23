// Faça um programa em C que receba dois números, calcule e mostre a divisão do primeiro
// número pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é
// necessário se preocupar com validações.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float num1,num2,div;
	printf("\n Informe um número");
		scanf("%f",&num1);
	printf("\n Informe um número");
		scanf("%f",&num2);
		div=num1/num2;
		printf("\n A divisão é %.2f",div);
}
