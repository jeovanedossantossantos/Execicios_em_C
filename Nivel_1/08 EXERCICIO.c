#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*Um banco conceder� um cr�dito especial aos seus clientes de acordo com o saldo m�dio
no �ltimo ano. Fa�a um algoritmo que receba o saldo m�dio de um cliente e calcule o valor do cr�dito, 
de acordo com a tabela a seguir. Mostre o saldo m�dio e o valor do cr�dito em reais 
Saldo M�dio ----------- Valor do Cr�dito 
Acima de 400,00 ------- 30% do saldo m�dio 
De 300,00 a 400,00----- 25% do saldo m�dio 
De 200,00 a 300,00 ---- 20% do saldo m�dio 
At� 200,00 ------------ 10% do saldo m�dio*/
int main(){
	float salario,credito;
	
	printf("DIGITE SEU SALARIO MEDIO NO ULTIMO ANO\n");
	scanf("%f",&salario);
	while (salario < 0){
		printf("ERRO!\nVALOR INCORRETO\n");
		printf("DIGITE SEU SALARIO MEDIO NO ULTIMO ANO\n");
		scanf("%f",&salario);
	}
	
	if (salario < 200){
		credito = salario *0.1;
		printf("SALARIO MEDIO: %f\nCREDITO: %f\n",salario,credito);	
	}
	else if(salario < 300){
		credito = salario *0.2;
		printf("SALARIO MEDIO: %f\nCREDITO: %f\n",salario,credito);
	}
	else if(salario < 400){
		credito = salario *0.25;
		printf("SALARIO MEDIO: %f\nCREDITO: %f\n",salario,credito);
	}
	else{
		credito = salario *0.3;
		printf("SALARIO MEDIO: %f\nCREDITO: %f\n",salario,credito);
	}
	return 0;
}
