#include<stdio.h>
#include<stdlib.h>

int fatorial(int);
float conbin(int ,int);
int main(){
	int n[5],p[5];
	float c[5];
	int i;
	
	printf("DIGITE OS TERMOS DO PRIMEIRO VETOR\n");
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	
	printf("DIGITE OS TERMOS DO SEGUNDO VETOR\n");
	for(i=0;i<5;i++){
		scanf("%d",&p[i]);
	}
	for(i=0;i<5;i++){
		if(n[i] >= p[i]){
			c[i]=conbin(n[i],p[i]);
		}
		else{
			c[i]=0;
		}
	}
	
	for(i=0;i<5;i++){
		printf("%f ",c[i]);
	}
	
	return 0;
}
int fatorial(int n){
	return ((n==0) ? 1 : n*fatorial(n-1));
}
float conbin(int g,int h){
	return ((fatorial(g)/(fatorial(h)*(fatorial(g-h)))));	
}













