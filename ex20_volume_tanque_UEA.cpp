//Calcule o volume de uma caixa d'água cilíndrica.
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float raio_do_tanque,altura_do_tanque, area,volume;
	printf("\n Informe a altura do tanque, por favor: ");
		scanf("%f",&altura_do_tanque);
	printf("\n Informe o raio do tanque, por favor:");
		scanf("%f",&raio_do_tanque);
		area=(raio_do_tanque)*(raio_do_tanque)*3.14;
		volume=area*altura_do_tanque;
	printf("\n O volume é: %.2f metros cúbicos",volume);
}
