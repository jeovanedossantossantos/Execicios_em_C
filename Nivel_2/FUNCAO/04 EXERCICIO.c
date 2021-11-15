#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que recebe como argumentos um vetor 
de inteiros e um número que representa a quantidade de elementos nesse vetor. 
A função deve retornar o produto de todos os elementos do vetor.*/

int produto(int*,int);

int main(){
	int tam;
	
	printf("QUAL O TAMANHO DO VETOR\n");
	scanf("%d",&tam);
	
	int *p,vetor[tam],i;
	p = vetor;
	for(i=0;i<tam;i++){
		printf("DIGITE O TERMO DO VETOR DE NUMERO %i\n",i+1);
		scanf("%d",p+i);
	}
	for(i=0;i<tam;i++){
		printf(" %i\n",*(p+i));
		
	}
	printf("O PRODUTO %d",produto(p,tam));
	return 0;
}
int produto(int *pon, int a){
	int soma=1, i;
	for (i=0;i<a;i++){
		soma= soma**(pon+i);
	}
	return soma;
}
