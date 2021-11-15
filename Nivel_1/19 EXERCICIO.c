#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
/*Construa um programa que crie um vetor V de 10 elementos do tipo inteiro, 
colocando 1 nas posições de índice par e 0 nas posições de índice ímpar. Mostrar V. */

	int v[10];
	int i=0;
	
	for(i=0;i<10;i++){
		if (i %2 == 0){
			v[i] = 1;
		}
		else{
			v[i] = 0;
		}
		printf("%i",v[i]);
	}
	return 0;
}
