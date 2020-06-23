//Faça um programa em C para ler a quantidade de horas/aula de dois professores e o valor por
//hora recebido por cada um. Mostrar na tela qual dos professores tem salário total maior.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float quant_hora_aula_prof1, valor_hora_aula_prof1,quant_hora_aula_prof2, valor_hora_aula_prof2,salario_prof1,salario_prof2;
	printf("\n Informe a quantidade horas/aulas trabalhadas do primmeiro professor: ");
		scanf("%f",&quant_hora_aula_prof1);
	printf("\n Informe o valor de uma hora/aula do primeiro professor: ");
		scanf("%f",&valor_hora_aula_prof1);
	printf("\n Informe a quantidade horas/aulas trabalhadas do segundo professor: ");
		scanf("%f",&quant_hora_aula_prof2);
	printf("\n Informe o valor de uma hora/aula do segundo professor: ");
		scanf("%f",&valor_hora_aula_prof2);
	salario_prof1=quant_hora_aula_prof1*valor_hora_aula_prof1;
	salario_prof2=quant_hora_aula_prof2*valor_hora_aula_prof2;
	if (salario_prof1!=salario_prof2){
		if (salario_prof1>salario_prof2){
			printf("\n O primeiro professor recebe mais");
		}
		else{
			printf("\n O segundo professor recebe mais");
		}
	}
}
