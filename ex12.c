#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int codigo;
	float salario, aumento, novo_salario;
	printf("\n Informe o codigo do funcionario, por favor");
		scanf("%i",&codigo);
	if (codigo == 1){
		printf("\n Escrituário");
		printf("\n Informe seu salario, por favor");
			scanf("%f",&salario);
			aumento = salario*(0.5);
			novo_salario = salario+aumento;
		printf("\n O aumento foi de R$ %f",aumento);
		printf("\n O salario ajustado e de R$ %f", novo_salario);
	}
	if (codigo == 2){
		printf("\n Secretária");
		printf("\n Informe seu salario, por favor");
			scanf("%f",&salario);
			aumento = salario*(0.35);
			novo_salario = salario+aumento;
		printf("\n O aumento foi de R$ %f",aumento);
		printf("\n O salario ajustado e de R$ %f", novo_salario);
	}
	if (codigo == 3){
		printf("\n Caixa");
		printf("\n Informe seu salario, por favor");
			scanf("%f",&salario);
			aumento = salario*(0.2);
			novo_salario = salario+aumento;
		printf("\n O aumento foi de R$ %f",aumento);
		printf("\n O salario ajustado e de R$ %f", novo_salario);
	}
	if (codigo == 4){
		printf("\n Gerente");
		printf("\n Informe seu salario, por favor");
			scanf("%f",&salario);
			aumento = salario*(0.1);
			novo_salario = salario+aumento;
		printf("\n O aumento foi de R$ %f",aumento);
		printf("\n O salario ajustado e de R$ %f", novo_salario);
	}
	if (codigo == 5){
		printf("\n Diretor");
		printf("\n Infelizmente seu salario nao pode ser ajustado. Lamento");
	}
}
