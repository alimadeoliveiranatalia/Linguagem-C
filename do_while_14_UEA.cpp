// Faça um programa que leia números digitados pelo usuário até ele digitar -1
// (utilizando um laço while). No final, calcule a média dos números fornecidos.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,num,soma,deseja;
	double media;
	soma=0;
	i=0;
	do{
		printf("\n Informe valores");
			scanf("%d",&num); // 'num' recebe os valores que o usuário deseja somar
			soma=soma+num; // 'soma' acumula os valores para serem somados
			i=i+1;// 'i' é o contador de passos, vamos precisar dele para armazenar a quantidade de vezes em que executamos a soma
			printf("\n Deseja continuar? caso não tecle -1");// uma mensagem perguntado ao usúario se ele deseja informar mais valores 
				scanf("%d",&deseja);// armazenamos o valor de 'deseja'
			
	}
	while(deseja!=-1);// caso 'deseja' seja igual a -1, sai do loop
	media=soma/i;// calculamos a média
	printf("\n A média dos valores propostos deu: %f",media);// exibimos o valor na tela
}
