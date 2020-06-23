/*Escreva um programa que leia um vetor de 50 posições de números inteiros e mostre somente os positivos*/
#include<stdio.h>
#include<locale.h>
/*main(){
	setlocale(LC_ALL,"");
	int i,valor,p[50],n[50],cont1=0;
	printf("\n Informe o valor para as 5 posições :");
	for (i=0;i<5;i++){
		scanf("%d",&valor);
		if (valor>0){
			p[i]=valor;
		}
		else{
			n[i]=valor;
		}
	}
	printf("\n Os positivos são:");
	for(i=0;i<5;i++){
		printf("\n %d",p[i]);
	}
}*/
main() {
	setlocale(LC_ALL,"");
    int pos[50], neg[50], posConta = 0, negConta = 0;
    for (int i = 0; i < 50; i++) {
        int valor;
        printf("Informe um valor: ");
        	scanf("%d", &valor);
        if (valor < 0) {
			neg[negConta++] = valor;
		}
        else {
		pos[posConta++] = valor;
		}
    }
    printf("Os números positivos digitados foram: ");
    for (int i = 0; i < posConta; i++) {
		printf("%d ", pos[i]);}
    printf("\nOs números negativos digitados foram: ");
    for (int i = 0; i < negConta; i++) {
		printf("%d ", neg[i]);}
}

