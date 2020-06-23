#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float dmaior, dmenor, a;
	printf("\n Informe a maior diagonal, por favor");
		scanf("%f",&dmaior);
	printf("\n Informe a menor diagonal, por favor");
		scanf("%f",&dmenor);
	a=(dmaior*dmenor)/2;
	printf("\n A area deste losango é:%f",a);
}
