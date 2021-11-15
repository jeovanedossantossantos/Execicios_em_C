#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*Construa um programa que crie uma matriz 5x5. 
Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/
int main(){
	int m[5][5];
	int i,j;
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(j == i){
				m[i][j] = 1;
			}
			else{
				m[i][j] = 0;
			}
		}
	}
	for (i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%i ",m[i][j]);
		
		}
		printf("\n");
	}		
	
	return 0;
}
