#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float num;
	printf("\n Informe um número: ");
		scanf("%f",&num);
	if (num>0)
		printf("\n %.2f é positivo",num);
	if (num<0)
		printf("\n %.2f é negativo",num);
	if (num==0)
		printf("\n %.2f é nulo",num);
}
