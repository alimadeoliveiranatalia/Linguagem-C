// Fa�a um programa em C que receba dois n�meros, calcule e mostre a divis�o do primeiro
// n�mero pelo segundo. Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o �
// necess�rio se preocupar com valida��es.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float num1,num2,div;
	printf("\n Informe um n�mero");
		scanf("%f",&num1);
	printf("\n Informe um n�mero");
		scanf("%f",&num2);
		div=num1/num2;
		printf("\n A divis�o � %.2f",div);
}
