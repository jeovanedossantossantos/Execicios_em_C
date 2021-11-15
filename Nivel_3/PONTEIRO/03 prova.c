#include<stdio.h>
#include<stdlib.h>
float ler(float*,int);
float *p;
int main(){
	int n; 
	p = (float*)malloc(5*sizeof(float));
	printf("DIGITE O TAMANHO DO VETOR\n");
	scanf("%d",&n);
	
	ler(p,n);
	
	int i;
	for(i=0;i<n;i++){
		printf("%f\n",*(p+i));
	}
	free(p);
	return 0;
}
float ler(float *p, int n){
	int i;
	for(i=0;i<n;i++){
		printf("DIGITE O VALOR %d\n",i+1);
		scanf("%f",&p[i]);
	}
}
