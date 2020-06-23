//Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
//poupar. Faça um programa em C para ler a quantidade de cada tipo de moeda, e imprimir o
//valor total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos,
//e ainda moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int nota_um_real, moeda_de50, moeda_de25, moeda_de10, moeda_de5, moeda_de1;
	float valor_poupado;
	printf("\n Informe quantas notas de R$1,00 para guardar");
		scanf("%d",&nota_um_real);
	printf("\n Informe quantas moedas de R$0,50 para guardar");
		scanf("%d",&moeda_de50);
	printf("\n Informe quantas notas de R$0,25 para guardar");
		scanf("%d",&moeda_de25);
	printf("\n Informe quantas notas de R$0,10 para guardar");
		scanf("%d",&moeda_de10);
	printf("\n Informe quantas notas de R$0,05 para guardar");
		scanf("%d",&moeda_de5);
	valor_poupado=nota_um_real*(1.0)+moeda_de50*(0.50)+moeda_de25*(0.25)+moeda_de10*(0.10)+moeda_de5*(0.05);
	printf("\n Até agora o valor poupado é de R$%.2f",valor_poupado);
	
}
