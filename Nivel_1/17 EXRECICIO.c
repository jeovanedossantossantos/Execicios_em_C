#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
/*Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, 
determine qual omenor e o maior valor do conjunto. O final do conjunto de valores 
é conhecido através do valor -5 ,que não deve ser considerado.*/
int aux,menor,maior,n;
printf("DIGITE UM NUMERO\n");
scanf("%d",&n);
menor = n;
maior = n;
while(n != -5){
	if ( menor >= n){
		menor = n;
	}
	if (maior <= n){
		maior = n;
	}
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&n);
}
printf("MAIOR: %d\nMENOR: %d\n",maior,menor);
	return 0;
}
