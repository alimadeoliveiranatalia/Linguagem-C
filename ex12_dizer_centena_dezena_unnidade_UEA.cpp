// Ler um n�mero inteiro (assuma at� tr�s d�gitos) e imprima a sa�da da seguinte forma:
// CENTENA = x
// DEZENA = y
// UNIDADE = z
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int num, x,y,z;
	printf("\n Informe um n�mero: ");
	scanf("%d",&num);
	x=num/100;
	y=(num%100)/10;
	z=((num%100)%10);
	printf("\n CENTENAS = %d",x);
	printf("\n DEZENAS = %d",y);
	printf("\n UNIDADES = %d",z);
}
