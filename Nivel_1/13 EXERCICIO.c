#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	
//Construa um algoritmo que apresente os 100 primeiros números ímpares.
	int i=0,j=1;
	while(i <= 100){
		if (i == 100){
			printf("%d",j);
		}
		else{
			printf("%d-",j);
		}
		j+=2;
		i++;
	}	
	return 0;
}
