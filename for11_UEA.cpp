// Calcular e listar todos os múltiplos positivos do número 7 menores ou
// iguais a 100.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i;
	for (i=1;i<=100;++i){
		if (i%7==0 && i>0){ // Ao utilizar o % estamos verificando qual número na variável 'i' é um multiplo de 7 e com && qual dos números é positivo
			printf("\n É múltiplo de 7:");// uma vez que as duas condições são verdadeiras listamos os valores na tela
			printf("\n %d",i);
		}
	}
}
