#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int num1,num2,num3;
	printf("\n Informe um n�mero inteiro, por favor");
		scanf("\n %i",&num1);
	printf("\n Informe um segundo n�mero, tamb�m do tipo inteiro, sem repetir o primeiro, por favor");
		scanf("\n %i",&num2);
	printf("\n Informe um terceiro n�mero, tamb�m do tipo inteiro, sem repetir o primeiro e o segundo, por favor");
		scanf("\n %i",&num3);
	if (num1<num2 && num1<num3)
		if (num2<num3)
			printf("\n %i %i %i",num1,num2,num3);
		else
		printf("\n %i %i %i",num1,num3,num2);		
	
	if (num2<num1 && num2<num3)
		if(num1<num3)
			printf("\n %i %i %i",num2,num1,num3);
		else
			printf("\n %i %i %i",num2,num3,num1);
			
	if (num3<num1 && num3<num2)
		if (num1<num2)
			printf("\n %i %i %i",num3,num1,num2);
		else
		printf("\n %i %i %i",num3,num2,num1);
	
}

