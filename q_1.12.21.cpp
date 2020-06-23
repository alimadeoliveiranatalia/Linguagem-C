// Numa fábrica trabalham homens e mulheres divididos em três classes:
// A – os que fazem até 30 peças por mês;
// B – os que fazem de 31 a 35 peças por mês;
// C – os que fazem mais de 35 peças por mês.
// A classe A recebe salário mínimo. A classe B recebe salário mínimo e mais 3% do salário mínimo por peça, 
// acima das 30 iniciais. A classe C recebe salário mínimo e mais 5% do salário mínimo por peça acima das 30 
// iniciais. Fazer um algoritmo que:
// a) Leia várias linhas, contendo cada uma:
// • o número do operário;
// • o número de peças fabricadas por mês;
// • o sexo do operário;
// b) Calcule e escreva:
// • O salário de cada operário;
// • O total da folha mensal de pagamento da fábrica;
// • O número total de peças fabricadas por mês;
// • A média das peças fabricadas pelos homens em cada classe;
// • A média das peças fabricadas pelas mulheres em cada classe;
// • O número do operário ou da operária de maior salário (não existe empate).
// Observação: A última linha, que servirá de flag, terá o número do operário igual a zero.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int class_func,quant_pecas,sexo,quant_pecas_masc;
	float salario_minimo,salario;
	while(){
		printf("\n Informe a sua classe de funcionário: Tecle [1] A [2] B ou [3] C " );
			scanf("%d",&class_func);
		if (class_funcionario==1){
			printf("\n Informe a quantidade de peças fabricadas por mês: " );
			scanf("%d",quant_pecas);
			salario=salario_min;
			}
		if (class_funcionario==2){
			printf("\n Informe a quantidade de peças fabricadas por mês: " );
			scanf("%d",quant_pecas);
			if ((quant_pecas>30) && (quant_pecas<=35)){
				salario=salario_minimo+0.03*(salario_minimo)*quant_pecas;
			}
			else{
				salario=salario_min;
			}
			}
		if (class_funcionario==3){
			printf("\n Informe a quantidade de peças fabricadas por mês: " );
			scanf("%d",quant_pecas);
			if (quant_pecas>35){
				salario=salario_minimo+0.05*(salario_minimo)*quant_pecas;
			}
			else{
				salario=salario_min;
			}
			}
		printf("\n Sua classe %2",class_funcionario);
		printf("\n Seu salário é de R$%f",salario);
		
			
			
		printf("\n Informe seu sexo: Tecle [1] feminino ou [2] masculino " );
			scanf("%d",sexo);
		while (sexo==2){
			printf("\n Informe a quantidade de peças fabricadas por mês: " );
			scanf("%d",quant_pecas_masc);
		}
		printf("\n Informe seu salário mínimo");
			scanf("%d",&salario_minimo);
		}
}
