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
	
		printf("\n os valores %i, %i e %i formam um tri�ngulo",lado1,lado2,lado3);
		if(lado1==lado2 && lado1==lado3 &&lado2==lado3)
			printf("\n  e � um tri�ngulo equil�tero");
		if (lado1!=lado2 &&lado1!=lado3 &&lado2!=lado3)
			printf("\n um tri�ngulo escaleno");
		if(lado1==lado2 && lado2!=lado3 || lado2==lado3 &&lado1!=lado3 || lado3==lado1 &&lado1!=lado2)
			printf("\n e � um tri�ngulo is�sceles");
		}
	else
	
		printf("\n os valores %i, %i e %i n�o formam um tri�ngulo",lado1,lado2,lado3);
}
		
