//A empresa XYZ decidiu conceder um aumento de salários a seus funcionários de acordo
//com a tabela abaixo:
//SALÁRIO ATUAL (R$) ÍNDICE DE AUMENTO
//0,00 – 400,00 15%
//401,00 – 700,00 12%
//701,00 – 1000,00 10%
//1001,00 – 1800,00 7%
//1801,00 – 2500,00 4%
//ACIMA DE 2500,00 SEM AUMENTO
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario,aumento,novo_salario;
	printf("\n Informe seu salário, por favor: ");
		scanf("%f",&salario);
	if (salario>=0 && salario<=400){
		aumento=salario*0.15;
		novo_salario=aumento+salario;
		printf("\n Com seu salário de R$%f o aumento foi de R$%f",salario,aumento);
		printf("\n Agora você passa a receber R$%f",novo_salario);
	}
	if (salario>400 && salario<=700){
		aumento=salario*0.12;
		novo_salario=aumento+salario;
		printf("\n Com seu salário de R$%f o aumento foi de R$%f",salario,aumento);
		printf("\n Agora você passa a receber R$%f",novo_salario);
	}
	if (salario>700 && salario<=1000){
		aumento=salario*0.1;
		novo_salario=aumento+salario;
		printf("\n Com seu salário de R$%f o aumento foi de R$%f",salario,aumento);
		printf("\n Agora você passa a receber R$%f",novo_salario);
	}
	if (salario>1000 && salario<=1800){
		aumento=salario*0.07;
		novo_salario=aumento+salario;
		printf("\n Com seu salário de R$%f o aumento foi de R$%f",salario,aumento);
		printf("\n Agora você passa a receber R$%f",novo_salario);
	}
	if (salario>1800 && salario<=2500){
		aumento=salario*0.04;
		novo_salario=aumento+salario;
		printf("\n Com seu salário de R$%f o aumento foi de R$%f",salario,aumento);
		printf("\n Agora você passa a receber R$%f",novo_salario);
	}
	if (salario>2500){
		
		printf("\n Você não teve aumento no seu salário");
		
	}
	
}
