// Uma empresa decidiu fazer um levantamento em rela��o aos
//candidatos que se apresentarem para preenchimento de vagas no seu quadro de
//funcion�rios, utilizando processamento eletr�nico. Supondo que voc� seja o
//programador encarregado desse levantamento, fazer um algoritmo que:
//� Leia um conjunto de dados para cada candidato contendo:
//a) N�mero de inscri��o do candidato;
//b) Idade;
//c) Sexo (masculino, feminino);
//d) Experi�ncia no servi�o (sim ou n�o). O �ltimo conjunto
//cont�m o n�mero de inscri��o do candidato igual a zero.
//� Calcule:
//a) O n�mero de candidatos do sexo feminino;
//b) O n�mero de candidatos do sexo masculino;
//c) Idade m�dia dos homens que j� t�m experi�ncia no servi�o;
//d) Porcentagem dos homens com mais de 45 anos entre o total de homens;
//e) N�mero de mulheres que t�m idade inferior a 35 anos e com experi�ncia no servi�o;
//f) A menor idade entre mulheres que j� t�m experi�ncia no servi�o.
//� Escreva:
//a) O n�mero de inscri��o das mulheres pertencentes ao grupo descrito no item e;
//b) O que foi calculado em cada item acima especificado.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<setlocale.h>
main(){
	setlocale(LC_ALL,"");
int inscricao, idade, sexo, experiencia; // vari�veis de leitura
int quant_mulheres=0,quant_homens=0;// variaveis de atribui��o
int idade_media_homens_exp,quant_homens_45=0,idade_quant_homens=0,quant_mulheres_35=0;
double media_homens_experiencia,porcentagem_homens_45;
while(inscricao>=-1){
	printf("\n Digite seu n�mero de inscri��o");
	scanf("%d",&inscricao);

	if (inscricao>-1){
		printf("\n Informe a idade:");
			scanf("%d",&idade);
		printf("\n Informe seu sexo, de tal forma que voc� informe: [0] Feminino e [1] Masculino ");
			scanf("%d",&sexo);
		printf("\n Tem experi�ncia? de tal forma que voc� informe: [0] sim e [1] n�o");
			scanf("%d",&experiencia);
		if (sexo==0){
			quant_mulheres=quant_mulheres+1;
			}
		else{
			if(sexo==1){
			quant_homens=quant_homens+1;}
			}
		if ((sexo==1) && (experiencia==0)){
			idade_quant_homens=idade_quant_homens+idade;
			quant_homens=quant_homens+1;
			media_homens_experiencia=(double)idade_quant_homens/quant_homens;			
		}
		if ((sexo==1) && (idade>=45)){
			quant_homens=quant_homens+1;
			porcentagem_homens_45=(double)quant_homens/100;
		}
		if ((sexo==0) && (idade<=35) && (experiencia==0)){
			quant_mulheres_35=quant_mulheres_35+1;
		}
		//if ((sexo==0) && (experiencia==0)){}
		}
	}
	printf("\n H� %d candidatas do sexo feminino",quant_mulheres);
	printf("\n H� %d candidatos do sexo masculino",quant_homens);
	printf("\n A idade m�dia dos homens que j� tem experi�ncia � de %lf % ",media_homens_experiencia);
	printf("\n Porcentagem dos homens com mais de 45 anos entre o total de homens � de %lf ",porcentagem_homens_45);
	printf("\n mulheres que t�m idade inferior a 35 anos e com experi�ncia no servi�o %d",quant_mulheres_35);
}
