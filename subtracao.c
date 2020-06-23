#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor1,valor2,resultado;
	printf("Informe o primeiro valor");
		scanf("%i",&valor1);
	printf("Informe o segundo valor");
		scanf("%i",&valor2);
	resultado=valor1-valor2;
	printf("O resultado foi:%i",resultado);
	
	return 0;
}
