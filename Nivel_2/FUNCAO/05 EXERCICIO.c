#include<stdio.h>
#include<stdlib.h>

/*Faça uma função que receba um número inteiro positivo N como parâmetro e retorne
 a soma dos N números inteiros existentes entre 1 e esse número. */
 
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
