#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	float execesso,multa=0,peso;
	printf("Digite o peso do peixe\n");
	scanf("%f",&peso);
	execesso = peso - 50;
	
	if (execesso > 0){
		multa = execesso * 4;
	}
	else{
		execesso=0;
	}
	printf("O execesso de peso e: %.2f\nA multa a pagar e:%.2f\n",execesso,multa);
	
	return 0;
}
