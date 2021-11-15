#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/* Tendo como dados de entrada a altura e o sexo de uma pessoa, 
construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas: 
a) Para homens: (72.7 * h) - 58 
b) Para mulheres: (62.1 * h) - 44.7
(h = ????????????) 
c) Peça o peso da pessoa e informe se ela está dentro, acima ou abaixo do peso. */

int main(){
	float h,peso,peso_ideal;// h é igual altura
	char sexo;
	printf("DIGITE A SUA ALTURA\n");
	scanf("%f",&h);
	printf("QUAL SEU SEXO\n[M] = MASCULINO\n[F] = FEMININO\n");
	scanf("%s",&sexo);
	printf("QUAL O SEU PESO ATUAL\n");
	scanf("%f",&peso);
	
	if (sexo == 'M'){
		peso_ideal = (72.7 * h) - 58;
	}
	else if ( sexo == 'F'){
		peso_ideal = (62.1 * h) - 44.7;
	}
	if (peso_ideal > peso){
		printf("VOCE ESTA ABAIXO DO PESO IDEAL\n");
	}
	else if (peso_ideal < peso){
		printf("VOCE ESTA ACIMA DO PESO\n");
	}
	else{
		printf("VOCE ESTA DENTRO DO PESO\n");
	}
	printf("SEU PESO IDEAL E: %.2f",peso_ideal);
	return 0;
}
