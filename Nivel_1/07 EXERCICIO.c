#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/* Faça um algoritmo que receba a idade de um nadador e mostre a sua categoria usando as regras a seguir:  
a. Fraldinha: até 5 anos 
b. Infantil: de 5 a 7 anos 
c. Juvenil: de 8 a 10 anos 
d. Adolescente: de 11 a 15 anos 
e. Adulto: de 16 a 30 anos 
f. Sênior: acima de 30 */
int main(){
	
	int idade;
	printf("DIGITE A IDADE DO NADADOR\n");
	scanf("%d",&idade);
	
	while(idade < 0){//essa parte do codigo e para garantir que o usuario ira digitar uma idade valida
		printf("ERRO!\nNAO EXITE IDADE NEGATIVA\nDIGITE A IDADE NOVAMENTE\n");
		scanf("%d",&idade);
	}
	if (idade <= 5){
		printf("FRALDINHA\n");
	}
	else if(idade <= 7){
		printf("INFANTIL\n");
	}
	else if(idade <= 10){
		printf("JUVENIL\n");
	}
	else if(idade <= 15){
		printf("ADOLECENTE\n");
	}
	else if (idade <= 30){
		printf("ALDULTO\n");
	}
	else{
		printf("SENIOR\n");
	}
	
	return 0;
}
