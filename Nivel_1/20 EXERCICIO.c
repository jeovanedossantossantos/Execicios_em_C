#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	
	/*Construa um programa que leia uma matriz 6x6, dada pelo usuário, 
	conte e escreva quantos valores maiores que 10 ela possui 
	(Utilize a função random() para preencher a matriz com valores aleatórios).*/
	int m[6][6];
	int i = 0,j=0;
	int cot =0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			m[i][j] = rand()% 100 + 1;
			//printf("%i-",m[i][j]);
			if (m[i][j] > 10){
				printf("\nO VALOR E: %i",m[i][j]);
				cot += 1;
			}
		}
	}
	printf("\nA QUNDIDADES DE VEZES QUE FOI SORTEADO UM NUMERO MAIOR QUE 10 FOI\n%i\n",cot);
	return 0;
}
