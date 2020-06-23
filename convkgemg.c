#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float lado, a;
	printf("\n Informe o tamanho do lado, por favor");
		scanf("%f", &lado);
	a=(lado)*(lado);
	printf("\n A area deste quadrado é: %f", a , "metros quadrados");
}
