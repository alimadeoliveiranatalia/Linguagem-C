#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	float n1, n2, n3, m;
	printf("\n Nota do trabalho");
		scanf("%f",&n1);
	printf("\n Nota da avaliacao");
		scanf("%f",&n2);
	printf("\n Nota do exame final");
		scanf("%f",&n3);
		m = (n1*2+n2*3+n3*5)/10;
		if (m>=8 && m<10)
			{printf("\n Obteve conceito A");
			}
		else{ printf("\n Obteve conceito B");
		}
	
	}
