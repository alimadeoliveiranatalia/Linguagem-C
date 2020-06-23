// Numa f�brica trabalham homens e mulheres divididos em tr�s classes:
// A � os que fazem at� 30 pe�as por m�s;
// B � os que fazem de 31 a 35 pe�as por m�s;
// C � os que fazem mais de 35 pe�as por m�s.
// A classe A recebe sal�rio m�nimo. A classe B recebe sal�rio m�nimo e mais 3% do sal�rio m�nimo por pe�a, 
// acima das 30 iniciais. A classe C recebe sal�rio m�nimo e mais 5% do sal�rio m�nimo por pe�a acima das 30 
// iniciais. Fazer um algoritmo que:
// a) Leia v�rias linhas, contendo cada uma:
// � o n�mero do oper�rio;
// � o n�mero de pe�as fabricadas por m�s;
// � o sexo do oper�rio;
// b) Calcule e escreva:
// � O sal�rio de cada oper�rio;
// � O total da folha mensal de pagamento da f�brica;
// � O n�mero total de pe�as fabricadas por m�s;
// � A m�dia das pe�as fabricadas pelos homens em cada classe;
// � A m�dia das pe�as fabricadas pelas mulheres em cada classe;
// � O n�mero do oper�rio ou da oper�ria de maior sal�rio (n�o existe empate).
// Observa��o: A �ltima linha, que servir� de flag, ter� o n�mero do oper�rio igual a zero.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int class_func,quant_pecas,sexo,quant_pecas_masc;
	float salario_minimo,salario;
	while(){
		printf("\n Informe a sua classe de funcion�rio: Tecle [1] A [2] B ou [3] C " );
			scanf("%d",&class_func);
		if (class_funcionario==1){
			printf("\n Informe a quantidade de pe�as fabricadas por m�s: " );
			scanf("%d",quant_pecas);
			salario=salario_min;
			}
		if (class_funcionario==2){
			printf("\n Informe a quantidade de pe�as fabricadas por m�s: " );
			scanf("%d",quant_pecas);
			if ((quant_pecas>30) && (quant_pecas<=35)){
				salario=salario_minimo+0.03*(salario_minimo)*quant_pecas;
			}
			else{
				salario=salario_min;
			}
			}
		if (class_funcionario==3){
			printf("\n Informe a quantidade de pe�as fabricadas por m�s: " );
			scanf("%d",quant_pecas);
			if (quant_pecas>35){
				salario=salario_minimo+0.05*(salario_minimo)*quant_pecas;
			}
			else{
				salario=salario_min;
			}
			}
		printf("\n Sua classe %2",class_funcionario);
		printf("\n Seu sal�rio � de R$%f",salario);
		
			
			
		printf("\n Informe seu sexo: Tecle [1] feminino ou [2] masculino " );
			scanf("%d",sexo);
		while (sexo==2){
			printf("\n Informe a quantidade de pe�as fabricadas por m�s: " );
			scanf("%d",quant_pecas_masc);
		}
		printf("\n Informe seu sal�rio m�nimo");
			scanf("%d",&salario_minimo);
		}
}
