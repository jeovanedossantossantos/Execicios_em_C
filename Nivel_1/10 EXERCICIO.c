#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int codigo;
	printf("DIGITE O CODIGO DO ALIMENTO\n");
	scanf("%d",&codigo);
	
	if (codigo == 1){
		printf("Alimento nao_perecivel\n");
	}
	else if((codigo >= 2) && (codigo <= 4)){
		printf("Alimento perecivel\n");
	}
	else if((codigo == 5) && (codigo == 6)){
		printf("Vestuario\n");
	}
	else if(codigo == 7){
		printf("Higiene pessoal\n");
	}
	else if((codigo >= 8) && (codigo <= 15)){
		printf("Limpeza e utensilios domesticos\n");
	}
	else{
		printf("Codigo invalido\n");
	}
	system("pause");
	return 0;
}
