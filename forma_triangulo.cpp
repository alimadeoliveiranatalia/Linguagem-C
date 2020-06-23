#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int lado1,lado2,lado3;
	printf("\n Informe um valor: " );
		scanf("%i",&lado1);
	printf("\n Informe um segundo valor: ");
		scanf("%i",&lado2);
	printf("\n Informe um terceiro valor: ");
		scanf("%i",&lado3);
	if (lado1<lado2+lado3 && lado2<lado3+lado1 && lado3<lado2+lado1){
	
		printf("\n os valores %i, %i e %i formam um triângulo",lado1,lado2,lado3);
		if(lado1==lado2 && lado1==lado3 &&lado2==lado3)
			printf("\n  e é um triângulo equilátero");
		if (lado1!=lado2 &&lado1!=lado3 &&lado2!=lado3)
			printf("\n um triângulo escaleno");
		if(lado1==lado2 && lado2!=lado3 || lado2==lado3 &&lado1!=lado3 || lado3==lado1 &&lado1!=lado2)
			printf("\n e é um triângulo isósceles");
		}
	else
	
		printf("\n os valores %i, %i e %i não formam um triângulo",lado1,lado2,lado3);
}
		
