#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

/*Construa um programa que leia uma matriz A (6x5) do tipo inteiro e 
construa uma matriz B de mesmo tipo e dimensão. Sendo que B deve ser 
formada do seguinte modo: 
a cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz 
A deve ser subtraído 4. No final mostrar as matrizes A e B. */
int main(){
	int a[6][5];
	int b[6][5];
	int i=0,j=0;
	
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			a[i][j] = rand()% 100 + 1;
			if (a[i][j] %2 == 0){
				b[i][j] = a[i][j] + 5;
			}
			else{
				b[i][j] = a[i][j] - 4;
			}
		}
	}
	printf("MATRIZ [A]\n");
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			printf("%i ",a[i][j]);
			
		}
		printf("\n");
	}
	printf("\n");
	printf("A MATRIZ [B]\n");
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			printf("%i ",b[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
