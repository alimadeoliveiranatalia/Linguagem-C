/*6) Defina um vetor de 10 posições e o preencha com os 10 primeiros números ímpares e o escreva.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int v[10],impares[10],i;
	printf("\n Informe 10 valores que deseja guardar: ");
	for(i=0;i<10;i++){
		int valor;
		scanf("%d",&valor);
		v[i]=valor;
	}
	printf("\n Os ímpares são:");
	for(i=0;i<10;i++){
		if (v[i]%2==1){
			impares[i]=v[i];
			printf("%d",impares[i]);
		}
	}
}
