#include<stdio.h>
#include<conio.h>
main(){
	int i,ano_atual;
	float salario_inicial, percentual_em2006, salario_em2006, salario_ajustado,percentual_atual;
	salario_inicial = 1000;
	percentual_em2006 = 0.015*salario_inicial;
	salario_em2006 = salario_inicial+percentual_em2006;
	printf("Seu aumento era de:R$ %f",percentual_em2006);
	printf("Seu salario em 2006 era de: R$%f",salario_em2006);
	printf("Informe o ano em exercicio, por favor: ");
		scanf("%d",&ano_atual);
	salario_ajustado = salario_em2006;
	percentual_atual = percentual_em2006;
	for (i=2006;i<=ano_atual;i++){
		percentual_atual = 2*percentual_em2006;
		salario_ajustado = salario_ajustado+percentual_em2006*salario_ajustado;
		}
	printf("Seu salario ajustado passa a ser:R$ %d",salario_ajustado);
	getch();
	return 0;
}
