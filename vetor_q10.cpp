/*10) Faça um programa que:
a) Leia um conjunto de valores inteiros que correspondem a 80 notas dadas a uma turma, notas estas que variam de
 0 a 10;
b) Calcule e imprima a frequência absoluta e a frequência relativa de cada nota;
Observações:
§ Frequência absoluta de uma nota é o número de vezes em que ela aparece no vetor;
§ Frequência relativa é a frequência absoluta dividido pelo número total de dados;*/
#include<stdio.h>
#include<locale.h>
main(){
	setlocale(LC_ALL,"");
	float notas[80],nota,nt[30];
	int i;
	printf("\n Informe as notas: ");
	for(i=0;i<5;i++){ /* Guarda as notas */
		scanf("%f",&nota);
		notas[i]=nota;
	}
	int quant_nota0=0,quant_nota1=0,quant_nota2=0,quant_nota3=0,quant_nota4=0,quant_nota5=0;
	int quant_nota6=0,quant_nota7=0,quant_nota8=0,quant_nota9=0,quant_nota10=0;
	for(i=0;i<5;i++){ /* Verifica as notas */
		if (notas[i]==0){
			nt[i]=notas[i];
			quant_nota0=quant_nota0+1;
		}
		if (notas[i]==1){
			nt[i]=notas[i];
			quant_nota1=quant_nota1+1;
		}
		if (notas[i]==2){
			nt[i]=notas[i];
			quant_nota2=quant_nota2+1;
		}
		if (notas[i]==3){
			nt[i]=notas[i];
			quant_nota3=quant_nota3+1;
		}
		if (notas[i]==4){
			nt[i]=notas[i];
			quant_nota4=quant_nota4+1;
		}
		if (notas[i]==5){
			nt[i]=notas[i];
			quant_nota5=quant_nota5+1;
		}
		if (notas[i]==6){
			nt[i]=notas[i];
			quant_nota6=quant_nota6+1;
		}
		if (notas[i]==7){
			nt[i]=notas[i];
			quant_nota7=quant_nota7+1;
		}
		if (notas[i]==8){
			nt[i]=notas[i];
			quant_nota8=quant_nota8+1;
		}
		if (notas[i]==9){
			nt[i]=notas[i];
			quant_nota9=quant_nota9+1;
		}
		if (notas[i]==10){
			nt[i]=notas[i];
			quant_nota10=quant_nota10+1;
		}	
	}
	printf("\n Frequência Absoluta do 0: %d",quant_nota0);
	printf("\n Frequência Absoluta do 1: %d",quant_nota1);
	printf("\n Frequência Absoluta do 2: %d",quant_nota2);
	printf("\n Frequência Absoluta do 3: %d",quant_nota3);
	printf("\n Frequência Absoluta do 4: %d",quant_nota4);	
	printf("\n Frequência Absoluta do 5: %d",quant_nota5);
	printf("\n Frequência Absoluta do 6: %d",quant_nota6);
	printf("\n Frequência Absoluta do 7: %d",quant_nota7);
	printf("\n Frequência Absoluta do 8: %d",quant_nota8);
	printf("\n Frequência Absoluta do 9: %d",quant_nota9);
	printf("\n Frequência Absoluta do 10: %d",quant_nota10);
	float fr_0=((quant_nota0/80)*100),fr_1=((quant_nota1/80)*100),fr_2=((quant_nota2/80)*100);
	float fr_3=((quant_nota3/80)*100),fr_4=((quant_nota4/80)*100),fr_5=((quant_nota5/80)*100);
	float fr_6=((quant_nota6/80)*100),fr_7=((quant_nota7/80)*100),fr_8=((quant_nota8/80)*100);
	float fr_9=((quant_nota9/80)*100),fr_10=((quant_nota10/80)*100);
	printf("\n Frequência Relativa do 0: %f",fr_0);
	printf("\n Frequência Relativa do 1: %f",fr_1);
	printf("\n Frequência Relativa do 2: %f",fr_2);
	printf("\n Frequência Relativa do 3: %f",fr_3);
	printf("\n Frequência Relativa do 4: %f",fr_4);	
	printf("\n Frequência Relativa do 5: %f",fr_5);
	printf("\n Frequência Relativa do 6: %f",fr_6);
	printf("\n Frequência Relativa do 7: %f",fr_7);
	printf("\n Frequência Relativa do 8: %f",fr_8);
	printf("\n Frequência Relativa do 9: %f",fr_9);
	printf("\n Frequência Relativa do 10: %f",fr_10);
}
