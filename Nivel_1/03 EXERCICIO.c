#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int a,b,c,d,x;
	printf("DIGITE OS VALORES DE:\nA\nB\nC\nD\nX\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&x);
	
	float s,numerador,denominado;
	//obs: irei ultilizar o pow para elevar as variaveis ao expoente que é uma palavra reservada da math.h
	//opitei por calcular separado para indentificar possiveis indeterminações ( divisões por zero)
	numerador = (pow(a,x+1) + pow(b,x+2) + pow(c,x+3) + pow(d,x+4));
	denominado=(pow(b,a) - pow(d,c));
	s = numerador/denominado;
	if (denominado == 0){
		printf("INPOSSIVEL DE RESOLVER PORQUE O DENOMINADOR E IGUAL A ZERO\n");
	}
	else{
		printf("O VALOR ENCONTRADO FOI:\n%f",s);
	}
	return 0;
}
