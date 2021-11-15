#include<stdio.h>
#include<stdlib.h>

void identidade(int linha, int coluna, int matriz[linha][coluna]);

int main(){
	int lin,col;
	printf("DIGITE A QUANTIDADES DE LINHAS E A QUANTIDADES DE COLUNAS DA MATRIZ\n");
	scanf("%d%d",&lin,&col);
	
	int mat[lin][col],i,j;
	for(i=0;i<lin;i++){
		for(j=0;j<col;j++){
			printf("DIGITE O TERMO DA MATRIZ[%d][%d]\n",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	printf("VEREFICANDO SE E UMA MATRIZ IDENTIDADE\n");
	identidade(lin,col,mat);
	return 0;
}

void identidade(int linha, int coluna, int matriz[linha][coluna]){
	int cont=0,i,j,termos=0;
	for(i=0;i<linha;i++){
		for(j=0;j<coluna;j++){
			if (i==j){
				if(matriz[i][j] == 1){
					cont+=1;
				}
			}
			else if(matriz[i][j]==0){
				termos+=1;
			}
		}
	}
	int soma = termos + cont;
	if (soma == (linha*coluna)){
		printf("ESSA MATRIZ E INDENTIDADE\n");
	}
	else{
		printf("ESSA MATRIZ NAO E INDENTIDADE\n");
	}
}
