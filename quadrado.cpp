#include<stdio.h>
#include<conio.h>
// o quadrado de um n�mero natural 'n' � dado pela soma dos 
//'n' primeiros n�meros �mpares consecutivos
// 1^2=1,2^2=1+3, etc. Dado um n�mero 'n',calcule seu quadrado usando
//a soma de �mpares ao �nv�s de produto.
main(){
	int i,n,impar,acumula_impar;
	printf("Informe um valor que voce gostaria de saber o quadrado dele: " );
		scanf("%d",n);
	for (i=0;i<=n;++i){
		impar = (2*i)+1;
		acumula_impar=impar+1;
		++acumula_impar;
		
	}
	getch();
	printf("\n o quadrado de %d e %d:",n,acumula_impar);
	
}
