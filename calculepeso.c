#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float peso, p15, p20, peso15, peso20;
		printf("\n Informe seu peso");
			scanf("\n %f",peso);
			p15 = peso*0.15;
			p20 = peso*0.2;
			peso15 = peso+p15;
			peso20 = peso+p20;
		printf("\n Se voce engordar 15 por cento do seu peso, vc vai pesar:%f", peso15);
		printf("\n Se voce engordar 20 por cento do seu peso, vc vai pesar:%f",peso20);
}
