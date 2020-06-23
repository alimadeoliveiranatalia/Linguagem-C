#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p1,pn,d;
	printf("Por gentileza, informe o preço do produto.");
		scanf("%f",&p1);
	d=(p1*10)/100;
	pn=p1-d;
	printf("Com um desconto de 10%, você vai pagar%f",pn);
	
	return 0;
}
