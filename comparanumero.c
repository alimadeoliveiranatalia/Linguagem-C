#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano, nasc , idade;
	printf("\n Em que ano estamos?");
		scanf("%i",&ano);
	printf("\n Em que ano voc� nasceu?");
		scanf("%i",&nasc);
	idade = ano-nasc;
	printf("\n Sua idade � %i", &idade, "\n anos");
	 scanf("%i",&idade);
}
