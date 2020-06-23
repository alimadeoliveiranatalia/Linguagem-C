//7)Sendo h= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, prepare um
//algoritmo  em C para calcular o número h, sendo o número N fornecido pelo usuário.
#include<stdio.h>
#include<locale.h>
#include<conio.h>
main(){
	setlocale(LC_ALL,"");
	int i, ate;
	float h; // Por poder armazenar mais casas decimais foi-se necessário declarar 'h' do tipo double.
	printf("\n Informe até onde gostaria de somar: ");
		scanf("%d",&ate); // variável que armazena até onde a soma ocorrerá.
	h=0; // inicia-se a variavel soma em zero.
	for (i=1;i<=ate;i++){
		//h=h+1.0/i; 	
		h=h+(float)1/h;	}
	printf("\n %f",h); // exibe na tela o valor de 'h' que armazena a soma.
	getch();
	return(0);
}
