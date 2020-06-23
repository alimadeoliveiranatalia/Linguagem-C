//Escreva um programa em C que leia valores inteiros em duas variaveis distintas.
// * Se o resto da divisao da primeira pela segunda for 1 mostre a soma dessas variaveis
//mais o resto da divisao;
// * Se for 2 escreva se o primeiro e o segundo valor sao pares ou impares;
// * Se for igual a 3 multiplique a soma dos valores lidos pelo primeiro;
// * Se for igual a 4 divida a soma dos numeros lidos pelo segundo, se este for diferente de zero.
// * Em qualquer outra situacao mostre o quadrado dos numeros lidos.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int valor1,valor2,resto;
	float div, soma, mult,quad1,quad2,div_soma;
	printf("\n Informe um número: ");
		scanf("%i",&valor1);
	printf("\n Informe mais um número: ");
		scanf("%i",&valor2);
	resto=valor1%valor2;
	div=valor1/valor2;
	soma=valor1+valor2;
	if (resto==1){
		printf("O resto da divisão de %i sobre %i é de: %i ",valor1,valor2,resto);
		printf("A soma é de: %f",soma);
		}
	if (div==2){
		if (valor1%2==0 && valor2%2==0){
			printf("\n Os valores %i e %i são pares",valor1,valor2);
		}
		if(valor1%2!=0 && valor2%2==0){
			printf("\n %i é ímpar e %i é par",valor1,valor2);
		}
		if(valor1%2==0 && valor2%2!=0){
			printf("\n %i é par e %i é ímpar",valor1,valor2);
		}
		else{
			printf("\n Os valores %i e %i são ímpares",valor1,valor2);
		}
		}
	if(div==3){
		mult=soma*valor1;
		printf("\n (%i+%i)*%i = %f",valor1,valor2,valor1,mult);
		}
	if (div==4){
		div_soma=soma/valor2;
		printf("\n (%i+%i)/%i = %f",valor1,valor2,valor2,div_soma);
		}
	if (resto!=1 && div!=2 && div!=3 && div!=4){
		quad1=valor1*valor1;
		quad2=valor2*valor2;
		printf("\n O quadrado de %i é %f",valor1,quad1);
		printf("\n O quadrado de %i é %f",valor2,quad2);
		}
	
	}
	
