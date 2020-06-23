#include <iostream>
int main(int argc, char** argv) {
	float num1,num2,soma,raiz;
	int opcao;
	cout<<"Escolha uma das alternativas a seguir:" ;
	cout<<"Tecle 1: Para mostra a soma de dois numeros" ;
	cout<<"Tecle 2: Para mostrar a raiz quadrada de um numero qualquer" ;
		gets(opcao);
	if (opcao == 1){
		cout <<"Informe um valor por favor";
			gets(num1);
		cout <<"Informe um segundo valor sem repetir o anterior";
			gets(num2);
		soma = num1+num2;
		cout <<"A soma resultou em:",soma;
	}
	if (opcao==2){
		count <<"Informe um valor por favor";
			gets(num1);
		raiz = sqrt(num1);
		cout <<"A raiz quadrada desse numero e:",raiz;
	}
	if ((opcao !=1) && (opcao!=2)){
		count <<"Nao existe tarefa para esta alternativa";
	}
}

