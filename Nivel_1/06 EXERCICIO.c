#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*Faça um algoritmo que leia os coeficientes a, b e c de uma equação do 2º grau e calcule o delta, 
determine se a parábola é de concavidade para cima e para baixo e que calcule as duas raízes, caso
 delta seja maior ou igual a zero. 
Do contrário imprima “ Não possui raízes reais”. */

int main(){
int a,b,c,delta;
float x1,x2;
printf("ESTE PROGRAMA CALCULARA AS RAIZES DE UMA FUNCAO DO SEGUNDO GRAU\n");
printf("DIGITE SEUS TERMOS\n");
printf("QUAL O VALOR DO TERMO [A]?\n");
scanf("%d",&a);

while (a == 0){
	printf("ERRO VOCE DIGITOU [A] = 0\nNAO EXISTE DIVISAO POR ZERO\n");
	printf("DIGITE NOVAMENTE O TERMO [A]\n");
	scanf("%d",&a);
}	
printf("QUAL O VALOR DO TERMO [B]?\n");
scanf("%d",&b);
printf("QUAL O VALOR DO TERMO [C]?\n");
scanf("%d",&c);

delta = (b * b) - 4 * a * c;
if (delta < 0){
	printf("Não possui raízes reais\n");
}
else{
	x1 = (-b - sqrt(delta))/(2*a);
	x2 = (-b + sqrt(delta))/(2*a);
	printf("X1 = %f\nX2 = %f\n",x1,x2);
}
if (a > 0){
		printf("A concavidade e voltada para cima\n");
	}
else{
		printf("A concavidade e voltada para baixo\n");
	}
	
return 0;
}
