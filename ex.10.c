#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dia, mes, ano, hora, min;
	char mostra_mes[10]; /* Declara-se um vetor do tipo string com com quantidade de posiçòes indefindas*/
	printf("\n Informe o dia em que voce nasceu, por favor");
	scanf("%i",&dia);
	printf("\n Informe o mes em que voce nasceu, por favor");
	scanf("%i",&mes);
		if (mes == 1){
			mostra_mes[10] = "Janeiro";
		}
		if (mes == 2){
			mostra_mes[10] = "Fevereiro";
		}
		if (mes == 3){
			mostra_mes[10] = "Marco";
		}
		if (mes == 4){
			mostra_mes[10] = "Abril";
		}
		if (mes == 5){
			mostra_mes[10] = "Maio";
		}
		if (mes == 6){
			mostra_mes[10] = "Junho";
		}
		if (mes == 7){
			mostra_mes[10] = "Julho";
		}
		if (mes == 8){
			mostra_mes[10] = "Agosto";
		}
		if (mes == 9){
			mostra_mes[10] = "Setembro";
		}
		if (mes == 10){
			mostra_mes[10] = "Outubro";
		}
		if (mes == 11){
			mostra_mes[10] = "Novembro";
		}
		if (mes == 12){
			mostra_mes[10] = "Dezembro";
		}
	printf("\n Informe o ano em que voce nasceu, por favor");
	scanf("%i",&ano);
	printf("\n Informe a hora em que voce nasceu, por favor");
	scanf("%i",&hora);
	printf("\n Informe os minutos em que voce nasceu, por favor");
	scanf("%i",&min);
	printf("\n Voce nasceu em:");
	printf("\n %i",dia,"\n/ %s",mostra_mes,"\n/ %i",ano); 
	printf("\n as %i",hora,"\n: %i", min);
}
