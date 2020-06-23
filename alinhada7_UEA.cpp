//Fazer um programa em C em para ler o código de um determinado produto e
//mostrar asua classificação. Utilize a seguinte tabela como referência:
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int codigo;
	printf("\n Informe o cádigo do produto");
		scanf("%d",&codigo);
	if (codigo==1){
		printf("\n Alimento não perecível");
	}
	if (codigo==2 || codigo==3 || codigo==4){
		printf("\n Alimento perecível");
	}
	if(codigo==5 || codigo==6){
		printf("\n Vestuário");
	}
	if (codigo!=1 && codigo!=2 && codigo!=3 && codigo!=4 && codigo!=5 && codigo!=6){
		printf("\n Código Inválido");
	}
}
