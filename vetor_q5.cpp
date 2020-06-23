/* Leia um vetor de 40 posições. Contar e escrever quantos valores pares ele possui.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int v[40],i,pares[40],soma;
	printf("\n Informe os 40 valores que deseja guardar: ");
	for(i=0;i<10;i++){
		int valor;
		scanf("%d",&valor);
		v[i]=valor;	
	}
	soma=0;
	for (i=0;i<10;i++){ /* Compara os valores que são pares e armazena em outro vetor*/
		if (v[i]%2==0){
			pares[i]=v[i];
			soma=soma+1; /* 'soma' conta as vezes em que foi confirmada ser numero par */
			printf("%d",pares[i]);
		}
	}
	printf(" Há %d números pares",soma);
}

