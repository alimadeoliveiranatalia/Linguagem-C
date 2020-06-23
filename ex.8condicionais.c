#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h> // foi preciso incluir esta biblioteca que faz com que a função raiz quadrada seja calculada pelo codigo
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char *argv[]) {
	int opcao;
	float num1, num2, soma, raiz;
	printf("\n Escolha uma das opcoes a seguir:");
	printf("\n tecle 1 para verificar a soma de dois numeros");
	printf("\n tecle 2 para verificar a raiz quadrada de um numero");
		scanf("%i",&opcao);
		if (opcao == 1) {
			printf("\n Informe um valor por favor");
				scanf("%f",&num1);
			printf("\n Informe um segundo valor sem repetir o anterior por favor");
				scanf("%f",&num2);
			soma = num1+num2;
			printf("\n A soma resultou em: %f", soma);
			}
		if (opcao == 2) {
			printf("\n Informe um valor por favor");
				scanf("%f",&num1);
			raiz = sqrt(num1);
			printf("\n A raiz quadrada desse numero e: %f",raiz);
		}
		if ((opcao != 1) && (opcao != 2)) {
			printf("\n nao existe alternativa para esta opcao.");
		}
}
