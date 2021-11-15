#include<stdio.h>
#include<stdlib.h>

void imprimir(int*);
int main(){
	int *p;
	p = (int*)malloc(5*sizeof(int));
	imprimir(p);
	free(p);
	return 0;
}

void imprimir(int *p){
	int i,j;
	int rep=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("DIGITE O TERMO M [%d][%d]\n",i,j);
			scanf("%d",&p[rep]);
			rep+=1;
		}
	}
	printf("OS TERMOS DA MATRIZ\n");
	int n=0;
	for(j=0;j<rep;j++){
		if(n<2){
			printf("%d ",*(p+j));
			n+=1;
		}
		else{
			printf("%d\n",*(p+j));
			n=0;
		}
	}
}
