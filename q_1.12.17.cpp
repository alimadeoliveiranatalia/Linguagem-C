// Uma companhia de teatro planeja dar uma série de espetáculos. A
// direção calcula que, a R$ 5,00 o ingresso, serão vendidos 120 ingressos, e as
// despesas montarão em R$ 200,00. A uma diminuição de R$ 0,50 no preço dos
// ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um
// algoritmo que escreva uma tabela de valores do lucro esperado em função do
// preço do ingresso, fazendo-se variar este preço de R$ 5,00 a R$ 1,00 de R$
// 0,50 em R$ 0,50. Escreva ainda o lucro máximo esperado, o preço e o número
// de ingressos correspondentes.
#include<stdio.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"");
	float pr=5, luc=600, lucmax=0,gasto=200;
	int qt=120;
	printf("ingresso\tquantidade\ttotal vendido\t lucro");
	while(pr>=1){
		luc=pr*qt;lucmax=luc-gasto;
		printf("\nR$%.2f",pr);
		printf("\t\t %i",qt);
		printf("\t\t R$%.2f",luc);
		printf("\t R$%.2f",lucmax);
		qt=qt+26;
		pr=pr-0.5;
				}
	getch();
}
