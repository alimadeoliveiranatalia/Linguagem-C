// Um motorista deseja colocar seu tanque X reais de gasolina. Escreva um programa em C para ler o preço litro da gasolina e o valor do pagamento , e exibir quantos litros ele conseguiu 
//colocar no tanque
#include<stdio.h>
main(){
	float reais_de_gasolina, litros_de_gasolina, preco_litro_gasolina;
	printf("Informe quanto de gasolina voce quer abastecer:  ");
		scanf("%f",&reais_de_gasolina);
	printf("Informe o preco do litro da gasolina: ");
		scanf("%f",&preco_litro_gasolina);
	litros_de_gasolina=reais_de_gasolina*preco_litro_gasolina;
	printf("So deu para abastecer %.2f ",litros_de_gasolina);
	
}
