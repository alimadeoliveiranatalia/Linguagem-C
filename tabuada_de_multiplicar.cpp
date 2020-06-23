#include<stdio.h>
#include<conio.h>
main(){
	int n,c,r;
	printf("Digite um numero entre 1 e 10: " );
		scanf("%d",&n);
	for (c=1;c<=10;c++){
		r = n*c;
		printf("\n %d x %d = %d",n,c,r);
	}
}
