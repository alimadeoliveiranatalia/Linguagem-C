/*Escreva um programa que leia um vetor de 20 posi��es e mostre-o. Em seguida,
troque o primeiro elemento com o �ltimo, o segundo com o pen�ltimo, o terceiro com o
antepen�ltimo e assim sucessivamente. Mostre o novo vetor depois da troca.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int v[20],i,valor,m[20];
	printf("\n Informe valores: ");
	for(i=0;i<20;i++){
		scanf("%d",&valor);
		v[i]=valor;
	}
	for(i=0;i<20;i++){
		printf("%d,",v[i]);
	}
	printf("\n Vetor troca: ");
	for(i=20;i>=0;i--){
		m[i]=v[i];
		printf("%d,",m[i]);/*Verificar por que est� imprimindo um endere�o de mem�ria*/
		
	}
}
