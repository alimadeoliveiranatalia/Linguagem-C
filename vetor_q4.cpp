/* Fa�a um programa que leia um vetor V de 10 posi��es e, ap�s, verifica se um n�mero N, 
fornecido pelo usu�rio, existe no vetor. Se existir, indicar a(s) posi��o(�es), sen�o escrever 
a mensagem "O n�mero fornecido n�o existe no vetor!". */
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[10],i;
	printf("\n Informe valores: ");
	for(i=0;i<10;i++){ /* armazena os valores no vetor*/
		int valor;
		scanf("%d",&valor);
			a[i]=valor;
	}
	printf("\n Informe um valor que gostaria de saber: ");
	int vlr_usuario;
	scanf("%d",&vlr_usuario);
	for(i=0;i<10;i++){ /* Faz a verifica��o */
		
		if (vlr_usuario==a[i]){
			printf("\n Valor %d est� na posi��o %d",a[i],i);
		}
		else{
			printf("\n O n�mero fornecido n�o existe no vetor! ");
		}
		i=10000; /* faz o contador sair do loop*/
	}
}
