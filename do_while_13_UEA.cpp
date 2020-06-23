// Escreva um programa que peça ao usuário que digite três números inteiros, correspondentes a dia ,
// mês e ano. Teste os números recebidos, e em caso de haver algum inválido, repita a leitura até conseguir
// valores que estejam na faixa correta (dias entre 1 e 31, mês entre 1 e 12 e ano entre 1900 e 2100).
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int dias,meses,anos;
	do {
		printf("\n Informe um valor: ");
			scanf("%d",&dias);
			
		printf("\n Informe um segundo valor: ");
			scanf("%d",&meses);
			
		printf("\n Informe um terceiro valor: ");
			scanf("%d",&anos);
			
	}
	while(dias<1 || dias>31 || meses<1 || meses>12 || anos<1900 || anos>2100); // se algum dos valores das variáveis 
	// 'dias' , 'meses' e 'anos' o loop se repete até que esteja fora das faixas estipuladas na condição while
	printf("\n %d dias %d meses %d anos",dias,meses,anos); // caso tudo esteja correto, exibimos na tela os valores 
}
