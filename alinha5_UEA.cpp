//Faça um programa em C em ler quatro valores referentes a quatro notas
//escolares de um aluno e imprimir uma mensagem dizendo que o aluno foi
//aprovado, se o valor da média escolar for maior ou igual a 7.0. Se o valor da
//média for menor que 7.0, solicitar a nota de exame, somar com o valor da média
//e obter nova média. Se a nova média for maior ou igual a 5, apresentar uma
//mensagem dizendo que o aluno foi aprovado em exame. Se o aluno não foi
//aprovado, indicar uma mensagem informando esta condição. Apresentar junto
//com asmensagens o valor da média do aluno, para qualquer condição.
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
		printf("\n Com média %.2f, você foi aprovado",media);
	}
	else{
		printf("\n Com média %.2f, você foi reprovado",media);
	}
		
}
