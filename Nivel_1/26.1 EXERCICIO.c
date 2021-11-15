#include <stdio.h>
#include <stdlib.h>

int main (){
	
	
	
	int numero,primo=0,i=1;
	float medade;
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&numero);
	
		
	
	if (numero % 2 == 0){
		goto MED;
	
	}
	else{
		while(1){
		if (numero % i == 0 ){
			primo += 1;
		}
		if (primo == 2 && i == numero){
			printf("O NUMERO %i E PRIMO\n",numero);
			break;
		}
		i++;
		
	}
	}
	MED:
		medade = numero /2;
		printf("%f",medade);
		if (numero == 2){
			printf(" O NUMERO %i E PRIMO\n",numero);
		}
	return 0;
}
