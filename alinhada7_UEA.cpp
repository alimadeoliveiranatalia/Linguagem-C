//Fazer um programa em C em para ler o c�digo de um determinado produto e
//mostrar asua classifica��o. Utilize a seguinte tabela como refer�ncia:
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int codigo;
	printf("\n Informe o c�digo do produto");
		scanf("%d",&codigo);
	if (codigo==1){
		printf("\n Alimento n�o perec�vel");
	}
	if (codigo==2 || codigo==3 || codigo==4){
		printf("\n Alimento perec�vel");
	}
	if(codigo==5 || codigo==6){
		printf("\n Vestu�rio");
	}
	if (codigo!=1 && codigo!=2 && codigo!=3 && codigo!=4 && codigo!=5 && codigo!=6){
		printf("\n C�digo Inv�lido");
	}
}
