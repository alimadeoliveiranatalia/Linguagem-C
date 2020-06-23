/* Escreva um programa que leia valores em um vetor de 5 posições. Escrever os
elementos do vetor e, em seguida, escrever os elementos na ordem inversa. */
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int a[5],i;
	printf("\n Informe os valores que gostaria de guardar: ");
	for (i=0;i<5;i++){ /* Adiciona elementos no vetor 'a'*/
		int valor;
		scanf("%d",&valor);
		a[i]=valor;
	}
	printf("\n Valores na forma inversa: ");
	for(i=4;i>=0;i--){ /* Imprime os valores do vetor 'a'*/
		printf("%d",a[i]);
	}
}
