#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resto, num;
	printf("\n Informe um numero, que seja inteiro, por favor.");
		scanf("%i", &num);
	resto = num % 2;
	if (resto==0){
	 
		printf("\n E um numero par");
		        }
	else{
	
		printf("\n E um numero inpar");
		}
	
	
}
