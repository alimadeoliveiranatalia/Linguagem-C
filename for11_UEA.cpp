// Calcular e listar todos os m�ltiplos positivos do n�mero 7 menores ou
// iguais a 100.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i;
	for (i=1;i<=100;++i){
		if (i%7==0 && i>0){ // Ao utilizar o % estamos verificando qual n�mero na vari�vel 'i' � um multiplo de 7 e com && qual dos n�meros � positivo
			printf("\n � m�ltiplo de 7:");// uma vez que as duas condi��es s�o verdadeiras listamos os valores na tela
			printf("\n %d",i);
		}
	}
}
