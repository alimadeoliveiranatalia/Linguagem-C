// Calcule a �rea de uma pizza que possui um raio R (pi=3,14)
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float raio,area;
	printf("\n Informe o raio de sua pizza: ");
		scanf("%f",&raio);
	area=3.14*(raio*raio);
	printf("\n A �rea de sua pizza �: %f",area);
}
