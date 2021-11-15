#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int numero;
	float medade;
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&numero);
	
	if (numero % 2 == 0){
		goto MED;
		
	}
	else{
		goto PRIMO;
		
	}
	
	MED:
		medade = numero /2;
	
	PRIMO:
		printf("QUAL");
	return 0;
}
