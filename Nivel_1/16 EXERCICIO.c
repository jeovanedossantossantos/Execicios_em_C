#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
/*Construa um algoritmo que, dado um conjunto de valores inteiros e positivos, 
determine qual o menor valor do conjunto. O final do conjunto de valores é conhecido 
através do valor zero, que não deve ser considerado.*/
int i;
int aux=0;
printf("DIGITE UM NUMERO\n");
scanf("%d",&i);
aux = i;
while(i != 0){
	
	if (i <= aux){
		aux = i;
	}
	
	if (i == 0){
		break;
	}
	printf("DIGITE UM NNUMERO\n");
	scanf("%d",&i);
}
printf("O MENOR NUMERO %i\n",aux);
	
	return 0;
}
