#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float num;
	printf("\n Informe um valor, por favor: " );
		scanf("%f",&num);
	if (num>=1 && num<=9){
	
		printf("\n %f este valor está na faixa permitida",num);}
	else{
	
		printf("\n %f este valor não está na faixa permitida",num);}
		
}
