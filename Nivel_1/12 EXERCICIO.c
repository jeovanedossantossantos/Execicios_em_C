#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main (){
	//Fa�a um algoritmo para Imprimir os n�meros inteiros de 1 at� 150.
	int i=1;
	while(i <= 150){
		if (i == 150){
			printf("%d",i);
		}
		else{
			printf("%d-",i);
		}
		i++;
	}
	
	return 0;
}
