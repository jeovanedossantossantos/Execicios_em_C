#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main (){
/*Construa um algoritmo que leia um conjunto de dados contendo altura e sexo 
(masculino e feminino) de 20 pessoas e depois calcule e escreva:
a. a maior e a menor altura do grupo: 
b. a média de altura das mulheres: 
c. o número de homens e a diferença percentual entre estes e as mulheres.*/
char sexo[10];
float altura,maior,menor;
int rep = 0;
float men=0,wom=0,media_wom=0;
system("color 70");

do{
	printf("DIGITE O SEU SEXO EM LETRAS MAIUSCULA\n");
	printf("MASCULINO\nFEMININO\n");
	scanf("%s",&sexo);
	printf("DIGITE SUA ALTURA\n");
	scanf("%f",&altura);
	if (rep == 0){
		maior = altura;
    	menor = altura;
	}
	if (maior <= altura){
		maior = altura;
	}
	if (menor >= altura){
		menor = altura;
	}
	if ((strcmp(sexo,"MASCULINO") == 0)){
		men ++;
	}
	else if ((strcmp(sexo,"FEMININO") == 0)){
		wom++;
		media_wom= media_wom + altura;
		printf("fudeu\n");
	}
	rep+=1;
}while (rep < 2);
float perc,dif;
//100=20
//xxx=men
perc = (men * 100)/2;
dif = 100 - perc;
dif = dif - perc;
if (dif < 0){
	dif*=-1;
}//printf
media_wom = media_wom / wom;
printf("\t\tALTURA\n");
printf("MAIOR\t%.2f\nMENOR\t%.2f\n",maior,menor);
printf("A MEDIA DA ALTURA DAS MULHERES FOI: %.2f\n",media_wom);
printf("A QUANTIDADE DE HOMEMES: %.f\nA QUANTIDADE DE MULHERES: %.f\n",men,wom);
printf("A DIFERENÇA PERCENTUAL ENTRE HOMEMES E MULHERES E: %.2f\n",dif);
dif=100-perc;
printf("HOMEME: %.2f PORCENTO\nMULHER: %.2f PORCENTO\n",perc,dif);
return 0;
}
