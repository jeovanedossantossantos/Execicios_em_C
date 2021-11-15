#include<stdio.h>
#include<stdlib.h>

/*Escreva uma fun��o que recebe como par�metro um inteiro positivo, 
que representa um determinado ano, e devolve 1 se o ano for bissexto, 
0 em caso contr�rio. Um ano � bissexto se ele � divis�vel por 4.
Divis�vel por 4. Sendo assim, a divis�o � exata com o resto igual a zero;
N�o pode ser divis�vel por 100. Com isso, a divis�o n�o � exata, ou seja, 
deixa resto diferente de zero;
Pode ser que seja divis�vel por 400.*/

int bissexto(int);

int main(){
	int ano;
	printf("DIGITE UM ANO\n");
	scanf("%d",&ano);
	
	printf("%d",bissexto(ano));
	return 0;
}

int bissexto(int a){
	int i;
	if((a%4==0) &&(a%100!=1)){
		return i=1;
	}
	else if(a%400 == 0){
		return i=1;
	}
	else{
		return i=0;
	}
}
