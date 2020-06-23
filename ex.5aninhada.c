#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2, num3, num4;
	printf("\n Informe um valor que seja inteiro, por favor");
		scanf("%i",&num1);
	printf("\n Informe um segundo valor tambem inteiro, maior que o primeiro, por favor");
		scanf("%i",&num2);
	printf("\n Informe um terceiro valor tambem inteiro, maior que o segundo, por favor");
		scanf("%i",&num3);
	printf("\n Informe um valor que seja inteiro, sem repetir os anteriores, por favor");
		scanf("%i",&num4);
	printf("\n A sequencia e:");
		if (num4>num3) {
			printf("\n %i %i %i %i",num4,num3,num2,num1);
			}
		if (num4<num3 && num4>num2) {
			printf("\n %i %i %i %i",num3, num4, num2, num1);
			}
		if (num4<num2 && num4>num1) {
			printf("\n %i %i %i %i", num3,num2,num4,num1);
			}
		if (num4<num1) {
			printf("\n %i %i %i %i",num3,num2,num1,num4);
			}
}
