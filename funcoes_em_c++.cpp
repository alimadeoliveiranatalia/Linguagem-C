#include <stdio.h>
#include <stdlib.h>
int soma_dobro(int a, int b);
void main(int argc, char *argv[]) {
	int x, y,res;
	printf("\n Digite o primeiro valor:");
		scanf("%i",&x);
	printf("\n Digite o segundo valor:");
		scanf("%i",&y);
	res = soma_dobro(x,y);
	print("\n A soma do dobro dos valores " x,"e", y," é: ",res);
		
}
int soma_dobro(int a, int b){
	int soma;
	a = 2*a;
	b = 2*b;
	soma = a+b;
	return soma;
}
