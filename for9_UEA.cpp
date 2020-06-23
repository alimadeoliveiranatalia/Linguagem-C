// 9) Faca um programa que apresente na tela a tabela de
// conversão de graus Celsius para Fahrenheit, de -100
// C a 100 C.
// OBS: Farenheit = (9/5)*(Celsius) + 32
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i; // variável que armazena a temperatura em Celsius 
	double far;// variável que armazena a temperatura em Fahrenheit
	for (i=-100;i<=100;i++){
			far=(9/5)*(i)+32; //a temperatura em Fahrenheit tem um valor diferente para cada 'i' incrementado
			printf("\n Celsius: %d| Fahrenheit: %f",i,far);
							}
	
}
