// Perguntar ao usu�rio quantos n�meros deseja somar. Em seguida, ler estes N
// n�meros e apresentar o valor da soma. (Fazer 3 vers�es deste programa: usando
// FOR, usando WHILE e usando DO...WHILE).
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,num,soma,guarda,somaw,somad;
	printf("\n Na Estrutura FOR:");
	printf("\n Quantos n�meros deseja somar? ");
		scanf("%d",&num); // 'num' armazena a quantidade de valores que o usu�rio deseja somar
		soma=0;// 'soma' ir� acumular o somatorio dos valores que o usu�rio informar.
	for (i=0;i<num;++i){
		printf("\n Informe os valores que deseja somar: ");
			scanf("%d",&guarda); // 'guarda' armazena os valores que ser�o somados
			soma=soma+guarda;// acumula��o da variavel  soma
	}
	printf("\n Para %d valores a soma �: %d",num,soma);
	printf("\n Na estrutura WHILE:");
	i=0;
	somaw=0; // foi criada uma outra vari�vel soma para que armazene os novos valores que ser�o recebidos dentro
	while(i<num){// da estrutura WHILE
		printf("\n Informe os valores que deseja somar: ");
			scanf("%d",&guarda);// mativemos a mesma vari�vel 'guarda', uma vez que dentro da estrutura WHILE s�o lidos novos valores
			somaw=somaw+guarda;// a vari�vel 'somaw' acumula a soma dos valores recebidos.
			i=i+1;// nosso contador de la�os � incrementado de 1 em 1.
	}
	printf("\n Para %d valores a soma �: %d",num,somaw);
	printf("\n Estrutura DO WHILE:");
		i=0;
		somad=0;
	do{
		printf("\n Informe os valores que deseja somar: ");
			scanf("%d",&guarda);// mativemos a mesma vari�vel 'guarda', uma vez que dentro da estrutura DO WHILE s�o lidos novos valores
		somad=somad+guarda;//a vari�vel 'somad' acumula a soma dos valores recebidos.
		i=i+1;
		
	}while(i<num);
	printf("\n Para %d valores a soma �: %d",num,somad);
	
	
}
