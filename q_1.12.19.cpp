// Numa certa loja de eletrodom�sticos, o comerci�rio encarregado da se��o de televisores recebe, 
// mensalmente, um sal�rio fixo mais comiss�o. Essa comiss�o � calculada em rela��o ao tipo e ao n�mero de
// televisores vendidos por m�s, obedecendo � tabela abaixo:
// Sabe-se, ainda, que ele tem um desconto de 8% sobre seu sal�rio fixo para o INSS. Se o seu sal�rio total 
// (fixo + comiss�es � INSS) for maior ou igual a R$500,00 ele ainda ter� um desconto de 15%, sobre esse sal�rio
// total, relativo ao imposto de renda retido na fonte. Sabendo-se que existem 20 empregados nesta
// se��o, leia o valor do sal�rio fixo e, para cada comerci�rio, o n�mero de sua inscri��o, o n�mero de 
// televisores a cores e o n�mero de televisores preto e branco vendidos; calcule e escreva o n�mero de inscri��o 
// de cada empregado, seu sal�rio bruto e seu sal�rio l�quido.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario_fixo, salario_bruto, salario_liquido,comissao_cores,comissao_peb,INSS,salario_total,imposto_de_renda;
	int i,opcao,quant_tv_cores_vendidas,quant_tv_peb_vendidas,inscricao;
		i=1;
		while(i<=2){
			printf("\n Informe seu n�mero de inscri��o: ");
				scanf("%d",&inscricao);
			printf("\n Informe seu sal�rio fixo: ");
				scanf("%f",&salario_fixo);
			printf("\n Fez a venda de algum televisor? Tecle: [0] sim ou [1] n�o");
				scanf("%d",&opcao);
			while(opcao==0){	
				printf("\n Informe a quantidade de televisores � cores que voc� vendeu este m�s: ");
					scanf("%d",&quant_tv_cores_vendidas);
					if (quant_tv_cores_vendidas>=10){
						comissao_cores=50*quant_tv_cores_vendidas;
						}
					else{
						comissao_cores=5*quant_tv_cores_vendidas;
						}	
				printf("\n Informe a quantidade de televisores em preto e branco que voc� vendeu este m�s: ");
					scanf("%d",&quant_tv_peb_vendidas);
					if (quant_tv_peb_vendidas>=20){
						comissao_peb=20*quant_tv_peb_vendidas;
					}
					else{
					comissao_peb=2*quant_tv_peb_vendidas;
					}
				salario_bruto=salario_fixo+comissao_cores+comissao_peb;
				printf("\n Seu n�mero de inscri��o � :%d",inscricao);
				printf("\n Seu sal�rio bruto � de R$%f",salario_bruto);
					
						INSS=salario_bruto*0.08;
						salario_total=salario_bruto-INSS;
						if (salario_total>=500.00){
							imposto_de_renda= salario_total*0.15;
							salario_liquido=salario_bruto-INSS-imposto_de_renda;
						}
						else{
							salario_liquido=salario_bruto-INSS;
						}
				printf("\n Seu sal�rio l�quido � de R$%f",salario_liquido);
				printf("\n Deseja verificar um outro n�mero de inscri��o? Tecle [1] Sim ou [2] N�o");
					scanf("%d",&opcao);	
			}
			i=i+1;
		}
}
