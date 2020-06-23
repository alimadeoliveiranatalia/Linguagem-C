#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1, n2, n3, n4, soma;
	printf("Informe a primeira nota");
		scanf("%i",&n1);
	printf("Informe a segunda nota");
		scanf("%i",&n2);
	printf("Informe a terceira nota");
		scanf("%i",&n3);
	printf("Informe a quarta nota");
		scanf("%i",&n4);
		soma=n1+n2+n3+n4;
		printf("O resultado final foi:%i",soma);	
	return 0;
}
