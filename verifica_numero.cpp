#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float num;
	printf("\n Informe um n�mero: ");
		scanf("%f",&num);
	if (num>0)
		printf("\n %.2f � positivo",num);
	if (num<0)
		printf("\n %.2f � negativo",num);
	if (num==0)
		printf("\n %.2f � nulo",num);
}
