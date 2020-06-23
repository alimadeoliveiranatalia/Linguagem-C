/* Faça um programa que leia um vetor V de 10 posições e, após, verifica se um número N, 
fornecido pelo usuário, existe no vetor. Se existir, indicar a(s) posição(ões), senão escrever 
a mensagem "O número fornecido não existe no vetor!". */
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
	for(i=0;i<10;i++){ /* Faz a verificação */
		
		if (vlr_usuario==a[i]){
			printf("\n Valor %d está na posição %d",a[i],i);
		}
		else{
			printf("\n O número fornecido não existe no vetor! ");
		}
		i=10000; /* faz o contador sair do loop*/
	}
}
