#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/* Dada uma matriz A (6x6) de elementos do tipo inteiro, construir um programa 
que calcule e mostre a soma dos elementos situados na diagonal principal da matriz 
(OBS: a diagonal principal de matriz corresponde aos elementos onde o índice da 
linha é igual ao índice da coluna). */
int main(){
	int a[6][6];
	int i=0,j=0,soma=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			a[i][j] = rand()% 100 + 1;
			if (i==j){
				soma+=a[i][j];
			}
		}
	}
printf("A soma e: %i",soma);
	
	return 0;
}
