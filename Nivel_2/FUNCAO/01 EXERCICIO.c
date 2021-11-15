#include<stdio.h>
#include<stdlib.h>
// 4*(4-1)*(4-2)*(4-3)
int fatorial (int n)
{
	return( (n==0) ? 1 : n* fatorial(n-1));
}
float serie(int n){
	float soma=0;
	int i,j,den=1;
	for(i=0;i<(n+1);i++){
		den = fatorial(i);
		//printf("%i fatorial\n",den);
		soma+= 1.0/den;
		
	}
	return soma;
}
int main(){
	int valor;
	float soma;
	printf("DIGITE UM NUMERO PARA CALCULAR O VALOR DA SERIE\n");
	scanf("%d",&valor);
	soma=serie(valor);
	printf("%f",soma);
	
}
