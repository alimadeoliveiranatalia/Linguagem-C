//Escreva um programa em C para ler tr�s valores inteiros e escrever na tela o
//maior e o menor deles. Considere que todos os valores s�o diferentes.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float vl1,vl2,vl3;
	printf("\n Informe um valor: ");
		scanf("%f",&vl1);
	printf("\n Informe um segundo valor: ");
		scanf("%f",&vl2);
	printf("\n Informe um terceiro valor: ");
		scanf("%f",&vl3);
	if (vl1!=vl2 && vl1!=vl3 && vl2!=vl3){
		if (vl1<vl2 && vl1<vl3 && vl2<vl3){
			printf("\n o maior � %f e o menor � %f",vl3,vl1);
		}
		if (vl1<vl2 && vl1<vl3 && vl2>vl3){
			printf("\n o maior � %f e o menor � %f",vl2,vl1);
		}
		if (vl2<vl1 && vl2<vl3 && vl1<vl3){
			printf("\n o maior � %f e o menor � %f",vl3,vl2);
		}
		if (vl2<vl1 && vl2<vl3 && vl3<vl1){
			printf("\n o maior � %f e o menor � %f",vl1,vl2);
		}
		if (vl3<vl1 && vl3<vl2 && vl1<vl2){
			printf("\n o maior � %f e o menor � %f",vl2,vl3);
		}
		if (vl3<vl1 && vl3<vl2 && vl2<vl1){
			printf("\n o maior � %f e o menor � %f",vl1,vl3);
		}
	}
	else{
		printf("\n N�o � poss�vel verificar o maior e menor uma vez que os n�meros s�o iguais");
	}
}
