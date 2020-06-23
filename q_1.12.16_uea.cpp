// Uma empresa decidiu fazer um levantamento em relação aos
//candidatos que se apresentarem para preenchimento de vagas no seu quadro de
//funcionários, utilizando processamento eletrônico. Supondo que você seja o
//programador encarregado desse levantamento, fazer um algoritmo que:
//• Leia um conjunto de dados para cada candidato contendo:
//a) Número de inscrição do candidato;
//b) Idade;
//c) Sexo (masculino, feminino);
//d) Experiência no serviço (sim ou não). O último conjunto
//contém o número de inscrição do candidato igual a zero.
//• Calcule:
//a) O número de candidatos do sexo feminino;
//b) O número de candidatos do sexo masculino;
//c) Idade média dos homens que já têm experiência no serviço;
//d) Porcentagem dos homens com mais de 45 anos entre o total de homens;
//e) Número de mulheres que têm idade inferior a 35 anos e com experiência no serviço;
//f) A menor idade entre mulheres que já têm experiência no serviço.
//• Escreva:
//a) O número de inscrição das mulheres pertencentes ao grupo descrito no item e;
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
int inscricao, idade, sexo, experiencia; // variáveis de leitura
int quant_mulheres=0,quant_homens=0;// variaveis de atribuição
int idade_media_homens_exp,quant_homens_45=0,idade_quant_homens=0,quant_mulheres_35=0;
double media_homens_experiencia,porcentagem_homens_45;
while(inscricao>=-1){
	printf("\n Digite seu número de inscrição");
	scanf("%d",&inscricao);

	if (inscricao>-1){
		printf("\n Informe a idade:");
			scanf("%d",&idade);
		printf("\n Informe seu sexo, de tal forma que você informe: [0] Feminino e [1] Masculino ");
			scanf("%d",&sexo);
		printf("\n Tem experiência? de tal forma que você informe: [0] sim e [1] não");
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
	printf("\n Há %d candidatas do sexo feminino",quant_mulheres);
	printf("\n Há %d candidatos do sexo masculino",quant_homens);
	printf("\n A idade média dos homens que já tem experiência é de %lf % ",media_homens_experiencia);
	printf("\n Porcentagem dos homens com mais de 45 anos entre o total de homens é de %lf ",porcentagem_homens_45);
	printf("\n mulheres que têm idade inferior a 35 anos e com experiência no serviço %d",quant_mulheres_35);
}
