#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//Escrever um algoritmo que leia o tempo de duração em segundos de um determinado evento em uma fábrica e informe-o expresso no formato horas:minutos:segundos. 
int main(){
	int segundos,horas,minutos;

	printf("DIGITE O TEMPO DE DURACAO EM SEGUNDOS\n");
	scanf("%d",&segundos);
	
	horas = segundos / 3600;//divisao inteira para determinar quantas horas durou o evento	
	segundos = segundos % 3600;//divisao para pegar o resto da divisao
	minutos = segundos / 60;//divisao inteira para descobrir quantos minutos durou o evento
	segundos = segundos % 60;//divisao para pegar o resto da divisao
	printf("O EVENTO DUROU %d HORA(S) E %d MINUTOS E %d SEGUNDOS\n",horas,minutos,segundos);
	
	system("pause");
	return 0;	
}
