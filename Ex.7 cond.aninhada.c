#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float A, B, C;
	int ind;
	printf("\n Informe um valor, por favor");
		scanf("%f",&A);
	printf("\n Informe um segundo valor, sem repetir o primeiro, por favor");
		scanf("%f",&B);
	printf("\n Informe um terceiro valor, sem repetir os anteriores, por favor");
		scanf("%f",&C);
	printf("\n Escolha um dos numeros a seguir: 1, 2 ou 3. Por favor");
		scanf("%i",&ind);
		if (ind == 1) {
			if ((A<B) && (A<C)) {
				if (B<C) {
					printf("\n Segue a sequencia: %f %f %f", A,B,C);
				}
				else{
					printf("\n Segue a sequencia: %f %f %f",A,C,B);}
			}
			if ((B<A) && (B<C)){
				if (A<C){
					printf("\n Segue a sequencia: %f %f %f", B, A, C);}
				else{
					printf("\n Segue a sequencia: %f %f %f", B, C, A);}
				}
			if ((C<A) && (C<B)){
				if (A<B){
					printf("\n Segue a sequencia: %f %f %f", C, A, B);}
				else{
					printf("\n Segue a sequencia: %f %f %f", C, B, A);}
					
			}	
		}
		if (ind == 2){
		 	if ((A>B) && (A>C)){
				if (B>C){
					printf("\n Segue a sequencia: %f %f %f", A, B, C);}
				else{
					printf("\n Segue a sequencia: %f %f %f", A, C, B);}
					
			}
			if ((B>A) && (B>C)){
					if (A>C){
						printf("\n Segue a sequencia: %f %f %f", B, A, C);}
					else{
						printf("\n Segue a sequencia: %f %f %f", B, C, A);}
						
			} 
			if ((C>B) && (C>A)){
				if (A>B){
					printf("\n Segue a sequencia: %f %f %f", C, A, B);}
				else{
					printf("\n Segue a sequencia: %f %f %f", C, B, A);}
						
			}
		}
		if (ind == 3){
			if ((A>B) && (A>C)){
				printf("\n Segue a sequencia: %f %f %f", B, A, C);}
			if ((B>A) && (B>C)){
				printf("\n Segue a sequencia: %f %f %f", C, B, A);}
			if ((C>B) && (C>A)){
				printf("\n Segue a sequencia: %f %f %f", A, C, B);}
		}
	
}
