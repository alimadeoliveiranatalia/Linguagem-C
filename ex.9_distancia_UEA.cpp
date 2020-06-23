// Construa um programa em C para calcular a distância entre dois pontos do plano cartsiano. Cada ponto é um par ordenado (x,y)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main(){
	int x1,x2,y1,y2;
	float d;
	printf("Informe a primeira abscissa ");
		scanf("%i",&x1);
	printf("Informe a segunda abscissa ");
		scanf("%i",&x2);
	printf("Informe a primeira ordenada ");
		scanf("%i",&y1);
	printf("Informe a segunda abscissa ");
		scanf("%i",&y2);
	d = sqrt(pow((x2-x1),2)+pow((y2-y1),2)); //sqrt: square root
	printf("Distancia = %.2f",d);
}
