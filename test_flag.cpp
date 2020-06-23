#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main (){

int flag, salario, salario_maior;

flag=1;
salario_maior=0;

while(flag==1){
	scanf("%i",&salario);
	if(salario!=0){
		
		if(salario>salario_maior){
			salario_maior=salario;
		}
		
	}
	else{
		flag=0;
	}
}

	printf("\n O salario maior é %i",salario_maior);
}
		

