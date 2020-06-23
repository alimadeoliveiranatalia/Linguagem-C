// Perguntar ao usuário quantos números deseja somar. Em seguida, ler estes N
// números e apresentar o valor da soma. (Fazer 3 versões deste programa: usando
// FOR, usando WHILE e usando DO...WHILE).
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,num,soma,guarda,somaw,somad;
	printf("\n Na Estrutura FOR:");
	printf("\n Quantos números deseja somar? ");
		scanf("%d",&num); // 'num' armazena a quantidade de valores que o usuário deseja somar
		soma=0;// 'soma' irá acumular o somatorio dos valores que o usuário informar.
	for (i=0;i<num;++i){
		printf("\n Informe os valores que deseja somar: ");
			scanf("%d",&guarda); // 'guarda' armazena os valores que serão somados
			soma=soma+guarda;// acumulação da variavel  soma
	}
	printf("\n Para %d valores a soma é: %d",num,soma);
	printf("\n Na estrutura WHILE:");
	i=0;
	somaw=0; // foi criada uma outra variável soma para que armazene os novos valores que serão recebidos dentro
	while(i<num){// da estrutura WHILE
		printf("\n Informe os valores que deseja somar: ");
			scanf("%d",&guarda);// mativemos a mesma variável 'guarda', uma vez que dentro da estrutura WHILE são lidos novos valores
			somaw=somaw+guarda;// a variável 'somaw' acumula a soma dos valores recebidos.
			i=i+1;// nosso contador de laços é incrementado de 1 em 1.
	}
	printf("\n Para %d valores a soma é: %d",num,somaw);
	printf("\n Estrutura DO WHILE:");
		i=0;
		somad=0;
	do{
		printf("\n Informe os valores que deseja somar: ");
			scanf("%d",&guarda);// mativemos a mesma variável 'guarda', uma vez que dentro da estrutura DO WHILE são lidos novos valores
		somad=somad+guarda;//a variável 'somad' acumula a soma dos valores recebidos.
		i=i+1;
		
	}while(i<num);
	printf("\n Para %d valores a soma é: %d",num,somad);
	
	
}
