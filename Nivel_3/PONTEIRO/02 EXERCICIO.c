#include<stdio.h>
#include<stdlib.h>
// Faça um programa usando ponteiros, para ordenar 5 números e mostrá-los ordenados na tela

float ordenar(float *);
int main(){
	float *p;
	p = (float *)malloc(5*sizeof(float));
	ordenar(p);
	free(p);
	return 0;
}
float ordenar(float *p){
	int i,j;
	for(i=0;i<5;i++){
		printf("DIGITE O VALOR %i: ",i+1);
		scanf("%f",p+i);
	}
	float aux=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(p[i] < p[j]){
				aux = p[j];
				p[j]= p[i];
				p[i] = aux;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%f ",*(p+i));
		
	}
}
