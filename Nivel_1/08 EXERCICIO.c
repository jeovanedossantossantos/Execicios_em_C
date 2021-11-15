#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*Um banco concederá um crédito especial aos seus clientes de acordo com o saldo médio
no último ano. Faça um algoritmo que receba o saldo médio de um cliente e calcule o valor do crédito, 
de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito em reais 
Saldo Médio ----------- Valor do Crédito 
Acima de 400,00 ------- 30% do saldo médio 
De 300,00 a 400,00----- 25% do saldo médio 
De 200,00 a 300,00 ---- 20% do saldo médio 
Até 200,00 ------------ 10% do saldo médio*/
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
