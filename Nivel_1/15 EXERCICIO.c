#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Calcular e imprimir a soma dos N primeiros números pares onde N é um número inteiro que deveser lido pelo teclado.
int main(){
	int n, i=0,j=0,soma=0;
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&n);
	
	while(i < n){
		if(i==n-1){
			printf("%d\n",j);
		}
		else{
			printf("%d-",j);
		}
		soma+=j;
		j+=2;
		i+=1;
	}
	printf("SOMA: %i\n",soma);
	system("pause");;
	return 0;
}
