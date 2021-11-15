#include<stdio.h>
#include<stdlib.h>

/*Faça uma função que receba três números inteiros como parâmetros, representando horas, 
minutos e segundos e os converta em segundos.*/

float converter(float,float,float);

int main(){
	float hora,minuto,segundo;
	
	printf("HH/MM/SS\n");
	scanf("%f%f%f",&hora,&minuto,&segundo);
	printf("%f",converter(hora,minuto,segundo));
	return 0;
}
float converter(float a,float b,float c){
	float final;
	return(final = (a * 3600) + (b * 60) + c);
	
}
