// Uma companhia de teatro planeja dar uma s�rie de espet�culos. A
// dire��o calcula que, a R$ 5,00 o ingresso, ser�o vendidos 120 ingressos, e as
// despesas montar�o em R$ 200,00. A uma diminui��o de R$ 0,50 no pre�o dos
// ingressos espera-se que haja um aumento de 26 ingressos vendidos. Fazer um
// algoritmo que escreva uma tabela de valores do lucro esperado em fun��o do
// pre�o do ingresso, fazendo-se variar este pre�o de R$ 5,00 a R$ 1,00 de R$
// 0,50 em R$ 0,50. Escreva ainda o lucro m�ximo esperado, o pre�o e o n�mero
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
