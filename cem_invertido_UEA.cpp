// 10) Escreva um programa que coloque os números de 1 a 100 na tela na
// ordem inversa (começando em 100 e terminando em 1).
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i;
	for (i=100;i>=1;--i){// iniciamos nossa variável em 100, enquanto 'i' for maior ou igual a 1
	// o valor de 'i' é exibido na tela
		printf("\n %d",i); //'i' é decrementado em -1.
	}
}
