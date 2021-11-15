#include<stdio.h>
#include<stdlib.h>
//Faça um programa que receba 5 valores e imprima na tela o maior deles usando ponteiros
float maior(float*);
int main(){
	float *p;
	p = (float *)malloc(5*sizeof(float));
	maior(p);
	free(p);
	return 0;
}

float maior(float *p){
	int i;
	for(i=0; i<5; i++){
		printf("DIGITE O VALOR %i\n",i+1);
		scanf("%f",p+i);
	}
	float maior= p[0];
	
	for(i=0; i<5; i++){
		if (maior < p[i]){
			maior = p[i];
		}
		
	}
	printf("O MAIOR E: %f",maior);
	
}
