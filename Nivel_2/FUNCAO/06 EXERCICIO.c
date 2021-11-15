#include<stdio.h>
#include<stdlib.h>

/*Escreva uma função que recebe como parâmetro um inteiro positivo, 
que representa um determinado ano, e devolve 1 se o ano for bissexto, 
0 em caso contrário. Um ano é bissexto se ele é divisível por 4.
Divisível por 4. Sendo assim, a divisão é exata com o resto igual a zero;
Não pode ser divisível por 100. Com isso, a divisão não é exata, ou seja, 
deixa resto diferente de zero;
Pode ser que seja divisível por 400.*/

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
