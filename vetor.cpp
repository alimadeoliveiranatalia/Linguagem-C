#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	int i,soma,v[10];
	soma=0;
	for (i=0;i<=9;i++){
		printf("\n Informe o %d valor: ",i+1);
			scanf("%d",&v[i]);
			soma=soma+v[i];
	}
	printf("\n A soma dos 10 elementos do vetor é %d",soma);
}
