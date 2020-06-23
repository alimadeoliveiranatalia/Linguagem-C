//Faça um programa em C em que efetue a leitura do nome e do sexo de uma
//pessoa, apresentando como saída uma das seguintes mensagens: “Ilmo Sr.”, para
//o sexo informado como masculino, ou a mensagem “Ilma Sra.”, para o sexo
//informado como feminino. Apresente na sequência da mensagem impressa o
//nome da pessoa.
#include<stdio.h>
#include<locale.h>
#include<string.h>
main(){
	setlocale(LC_ALL,"");
	char nome[15],sexo[15];
	printf("\n Informe seu nome:");
		gets(nome);
	printf("\n Informe seu sexo:");
		gets(sexo);
	if (strcmp(sexo,"feminino")==0){
		printf("\n Ilma Sra %s",nome);}
	else {
		printf("\n Ilmo Sr %s",nome);}
	
}
