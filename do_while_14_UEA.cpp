// Fa�a um programa que leia n�meros digitados pelo usu�rio at� ele digitar -1
// (utilizando um la�o while). No final, calcule a m�dia dos n�meros fornecidos.
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
			scanf("%d",&num); // 'num' recebe os valores que o usu�rio deseja somar
			soma=soma+num; // 'soma' acumula os valores para serem somados
			i=i+1;// 'i' � o contador de passos, vamos precisar dele para armazenar a quantidade de vezes em que executamos a soma
			printf("\n Deseja continuar? caso n�o tecle -1");// uma mensagem perguntado ao us�ario se ele deseja informar mais valores 
				scanf("%d",&deseja);// armazenamos o valor de 'deseja'
			
	}
	while(deseja!=-1);// caso 'deseja' seja igual a -1, sai do loop
	media=soma/i;// calculamos a m�dia
	printf("\n A m�dia dos valores propostos deu: %f",media);// exibimos o valor na tela
}
