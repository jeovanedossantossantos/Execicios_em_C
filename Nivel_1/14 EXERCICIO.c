#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
//Construa um algoritmo que apresente os 100 primeiros n�meros de uma Progress�o Aritm�tica,sendo lidos o primeiro termo e a raz�o. 
 int termo,razao;
 printf("Digite o primeiro termo da PA\n");
 scanf("%i",&termo);
 printf("Digite a razao da PA\n");
 scanf("%i",&razao);
 
 int i=0;
 while(i < 100){
 	if (i == 99){
 		printf("%d",termo);
	}
	else{
		printf("%d-",termo);
	}
	termo = termo + razao;
	i++;
 	
 }	
	
	return 0;
}
