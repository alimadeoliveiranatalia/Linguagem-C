// Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um programa em C para ler uma temperatura em Celsius e imprimi-la 
// em Fahrenheit.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float celsius,fahrenheit;
	printf("\n Informe a temperatura em Celsius: ");
		scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("\n A temperatura em Farenheit é: %.2f",fahrenheit);
}
