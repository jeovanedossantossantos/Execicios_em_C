#include<stdio.h>
#include<stdlib.h>

/*Fa�a uma fun��o que receba um n�mero inteiro positivo N como par�metro e retorne
 a soma dos N n�meros inteiros existentes entre 1 e esse n�mero. */
 
 int soma(int);
 
 int main(){
 	int n;
 	
 	printf("DIGITE UM NUMERO\n");
 	scanf("%d",&n);
 	printf("SOMA: %d",soma(n));
 	return 0;
 }
 int soma(int a){
 	int i,soma = 0;
 	for(i=1;i<a;i++){
 		soma+=i;
	 }
	return soma;
 }
