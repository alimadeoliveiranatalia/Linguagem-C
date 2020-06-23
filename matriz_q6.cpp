/* Criar um programa que possa armazenar as alturas de dez atletas de cinco delegações
que participarão dos jogos de verão. Imprimir a maior altura de cada delegação.*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float a[5][10],so_maior[5],valor=1;
	int i,j;
	printf("Informe as alturas: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<3;i++){
		so_maior[i]=a[i][valor];
		for(j=0;j<3;j++){
			if(a[i][j]>so_maior[i]){
				so_maior[i]=a[i][j];
			}
		}
		valor=valor+1;
	}
	for(i=0;i<3;i++){
		printf("%f",so_maior[i]);
	}
}
