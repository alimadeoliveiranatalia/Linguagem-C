// Faça um programa em C para calcular a quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras
#include <stdio.h>
main(){
	int quan_cavalos, ferraduras;
	printf("\n quantos cavalos voce gostaria de equipar? ");
		scanf("%d",&quan_cavalos);
	ferraduras=4*quan_cavalos;
	printf("\n Voce vai precisar %d",ferraduras,"\n ferraduras");
}
