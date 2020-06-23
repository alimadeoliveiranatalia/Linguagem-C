// Fulano tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Ciclano tem 1,10 e cresce tem 3
// cent�metros por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios
// para que Ciclano seja maior que Fulano.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	double fulano,ciclano;
	int ano;
	ano=1; // iniciamos as vari�v�is 'i', 'fulano' e 'ciclano' com seus respectivos valores em um ano
	fulano=1.50;// em exerc�cio
	ciclano=1.10;
	while (ciclano<fulano){ // enquanto o valor de 'ciclano' n�o for maior que o de fulano
		fulano=fulano+0.02*(ano);// fulano recebe 1.50+0.02*1 para ano=1 o mesmo ocorre para ano=ano+1
		ciclano=ciclano+0.03*(ano);// ciclano recebe 1.10+0.03* para ano=2 o mesmo ocorre para ano=ano+1
		ano=ano+1;// incrementamos o valor de anos para obter a altura de 'ciclano' e 'fulano' nos anos posteriores
	}
	printf("\n Em %d anos, Ciclano ter� %f m e Fulano ter� %f m",ano,ciclano,fulano);// imprimimos na tela o ano em que 
	// ciclano � maior que fulano. 
}
