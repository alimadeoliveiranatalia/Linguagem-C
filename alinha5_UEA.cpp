//Fa�a um programa em C em ler quatro valores referentes a quatro notas
//escolares de um aluno e imprimir uma mensagem dizendo que o aluno foi
//aprovado, se o valor da m�dia escolar for maior ou igual a 7.0. Se o valor da
//m�dia for menor que 7.0, solicitar a nota de exame, somar com o valor da m�dia
//e obter nova m�dia. Se a nova m�dia for maior ou igual a 5, apresentar uma
//mensagem dizendo que o aluno foi aprovado em exame. Se o aluno n�o foi
//aprovado, indicar uma mensagem informando esta condi��o. Apresentar junto
//com asmensagens o valor da m�dia do aluno, para qualquer condi��o.
#include<stdio.h>
#include<locale.h>
main(){
	float nota1,nota2,nota3,nota4,media;
	setlocale(LC_ALL,"");
	printf("\n Informe a primeira nota: " );
		scanf("%f",&nota1);
	printf("\n Informe a segunda nota: " );
		scanf("%f",&nota2);
	printf("\n Informe a terceira nota: " );
		scanf("%f",&nota3);
	printf("\n Informe a quarta nota: " );
		scanf("%f",&nota4);
	media=(nota1+nota2+nota3+nota4)/4;
	if (media>=7.0){
		printf("\n Com m�dia %.2f, voc� foi aprovado",media);
	}
	else{
		printf("\n Com m�dia %.2f, voc� foi reprovado",media);
	}
		
}
