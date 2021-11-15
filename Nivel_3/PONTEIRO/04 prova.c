#include<stdio.h>
#include<stdlib.h>

int main(){
	int tam;
	printf("DIGITE O TAMANHO DO VETOR\n");
	scanf("%d",&tam);
	int *p;
	p=(int*)malloc(5*sizeof(int));
	int i;
	for(i=0;i<tam;i++){
		printf("DIGITE O TERMO %d:",i+1);
		scanf("%d",&p[i]);
	}
	printf("OS TERMOS DIGITADOS FORAM\n");
	for(i=0;i<tam;i++){
		printf("%d:\n",*(p+i));
	}	
	return 0;
}
