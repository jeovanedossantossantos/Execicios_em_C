#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que recebe como argumentos uma matriz de inteiros e dois números que 
representam o número de linhas e o número de colunas da mesma. 
A função deve retornar o produto de todos os elementos que compõem a diagonal principal da matriz.*/

int proMatriz(int lin,int col,int mat[lin][col]);

int main(){
	
	int linha,coluna,*mat;
	printf("DIGITE A QUANTIDADES DE LINHAS\n");
	scanf("%d",&linha);
	printf("DIGITE A QAUNTIDADE DE COULUNAS\n");
	scanf("%d",&coluna);
	
	int matriz[linha][coluna];
	
	int i,j;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			printf("DIGITE O TERMO DA MATRIZ [%i][%i]\n",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}

	int produto = proMatriz(coluna,linha,matriz);
	printf("O PRODUTO DOS TERMOS DA DIAGONAL PRINCIPAL E: %d",proMatriz(coluna,linha,matriz));
	
	return 0;
}

int proMatriz(int col,int lin,int mat[lin][col]){
	int soma=1,i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			if(i==j){
				soma=soma*(mat[i][j]);
			}
		}
	}
	return soma;
}
