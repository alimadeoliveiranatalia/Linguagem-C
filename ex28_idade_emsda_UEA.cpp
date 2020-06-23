// Faça um programa em C que receba o ano de nascimento de uma pessoa e o ano atual,
// calcule e mostre:
// a) a idade dessa pessoa em anos;
// b) a idade dessa pessoa em meses;
// c) a idade dessa pessoa em dias;
// d) a idade dessa pessoa em semanas.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int ano_nascimento,ano_atual,idade_em_anos,idade_em_meses,idade_em_dias,idade_em_semanas;
	printf("\n Informe o ano em que você nasceu: ");
		scanf("%d",&ano_nascimento);
	printf("\n Informe o ano atual: ");
		scanf("%d",&ano_atual);
	idade_em_anos=ano_atual-ano_nascimento;
	idade_em_meses=idade_em_anos*12;
	idade_em_dias=idade_em_meses*30;
	idade_em_semanas=idade_em_meses*4;
	printf("\n Até aqui você já viveu %d anos",idade_em_anos);
	printf("\n Até aqui você já viveu %d meses",idade_em_meses);
	printf("\n Até aqui você já viveu %d dias",idade_em_dias);
	printf("\n Até aqui você já viveu %d semanas",idade_em_semanas);

}
