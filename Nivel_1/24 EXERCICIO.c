#include <stdio.h>
#include <stdlib.h>

/* */

int main(int argc, char *argv[]) {
	int numero,n=0,i;
	
	printf("DIGITE O NUMERO\n");
	scanf("%d",&numero);
	
	for(i=0;i<10;i++){
		
		n = i * numero;
		printf("%d\n",n);
	}
	return 0;
}
