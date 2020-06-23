//Fazer um programa em C em para ler o ano de nascimento de uma pessoa,
//calcular e mostrar sua idade e, também, verificar e mostrar se ela já tem idade
//para votar (16 anos ou mais) e para conseguir a Carteira de Habilitação (18 anos ou mais).
#include<stdio.h>
#include<locale.h>
main(){
	int ano_nascimento, ano_atual,idade;
	setlocale(LC_ALL,"");
	printf("\n Informe seu ano de nascimento, por favor: ");
		scanf("%d",&ano_nascimento);
	printf("\n Informe o ano atual, por favor: ");
		scanf("%d",&ano_atual);
		idade=ano_atual-ano_nascimento;
	if (idade>=18){
	
		printf("\n Você já pode dar entrada em sua carteira de habilitação");}
	else{
		if (idade<=17){
			printf("\n Você já pode votar");}
			}
	
}
