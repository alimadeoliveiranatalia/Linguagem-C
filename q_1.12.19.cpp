// Numa certa loja de eletrodomésticos, o comerciário encarregado da seção de televisores recebe, 
// mensalmente, um salário fixo mais comissão. Essa comissão é calculada em relação ao tipo e ao número de
// televisores vendidos por mês, obedecendo à tabela abaixo:
// Sabe-se, ainda, que ele tem um desconto de 8% sobre seu salário fixo para o INSS. Se o seu salário total 
// (fixo + comissões – INSS) for maior ou igual a R$500,00 ele ainda terá um desconto de 15%, sobre esse salário
// total, relativo ao imposto de renda retido na fonte. Sabendo-se que existem 20 empregados nesta
// seção, leia o valor do salário fixo e, para cada comerciário, o número de sua inscrição, o número de 
// televisores a cores e o número de televisores preto e branco vendidos; calcule e escreva o número de inscrição 
// de cada empregado, seu salário bruto e seu salário líquido.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float salario_fixo, salario_bruto, salario_liquido,comissao_cores,comissao_peb,INSS,salario_total,imposto_de_renda;
	int i,opcao,quant_tv_cores_vendidas,quant_tv_peb_vendidas,inscricao;
		i=1;
		while(i<=2){
			printf("\n Informe seu número de inscrição: ");
				scanf("%d",&inscricao);
			printf("\n Informe seu salário fixo: ");
				scanf("%f",&salario_fixo);
			printf("\n Fez a venda de algum televisor? Tecle: [0] sim ou [1] não");
				scanf("%d",&opcao);
			while(opcao==0){	
				printf("\n Informe a quantidade de televisores à cores que você vendeu este mês: ");
					scanf("%d",&quant_tv_cores_vendidas);
					if (quant_tv_cores_vendidas>=10){
						comissao_cores=50*quant_tv_cores_vendidas;
						}
					else{
						comissao_cores=5*quant_tv_cores_vendidas;
						}	
				printf("\n Informe a quantidade de televisores em preto e branco que você vendeu este mês: ");
					scanf("%d",&quant_tv_peb_vendidas);
					if (quant_tv_peb_vendidas>=20){
						comissao_peb=20*quant_tv_peb_vendidas;
					}
					else{
					comissao_peb=2*quant_tv_peb_vendidas;
					}
				salario_bruto=salario_fixo+comissao_cores+comissao_peb;
				printf("\n Seu número de inscrição é :%d",inscricao);
				printf("\n Seu salário bruto é de R$%f",salario_bruto);
					
						INSS=salario_bruto*0.08;
						salario_total=salario_bruto-INSS;
						if (salario_total>=500.00){
							imposto_de_renda= salario_total*0.15;
							salario_liquido=salario_bruto-INSS-imposto_de_renda;
						}
						else{
							salario_liquido=salario_bruto-INSS;
						}
				printf("\n Seu salário líquido é de R$%f",salario_liquido);
				printf("\n Deseja verificar um outro número de inscrição? Tecle [1] Sim ou [2] Não");
					scanf("%d",&opcao);	
			}
			i=i+1;
		}
}
