//Escreva um programa em C para ler cinco valores inteiros, calcular a sua média, e escrever na
//tela os números que são superiores à média.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int vl1,vl2,vl3,vl4,vl5;
	float media;
	printf("\n Informe um valor: ");
		scanf("%i",&vl1);
	printf("\n Informe um segundo valor: ");
		scanf("%i",&vl2);
	printf("\n Informe um terceiro valor: ");
		scanf("%i",&vl3);
	printf("\n Informe um quarto valor: ");
		scanf("%i",&vl4);
	printf("\n Informe um quinto valor: ");
		scanf("%i",&vl5);
	media=(vl1+vl2+vl3+vl4+vl5)/5;
	if (media<vl1 || media<vl2 || media<vl3 || media<vl4 || media<vl5){	
		if (media<vl1){
			printf("primeiro valor: %i",vl1);
		}
		if (media<vl2){
			printf("\n segundo valor: %i",vl2);
		}
		if (media<vl3){

			printf("\n terceiro valor: %i",vl3);
		}
		if (media<vl4){
			printf("\n quarto valor: %i",vl4);
		}
		if (media<vl5){
			printf("\n quinto valor: %i",vl5);
		}
	}
	else{
		printf("\n Nenhum dos números é superior a média: %f",media);
printf("%f",media);	}
}
