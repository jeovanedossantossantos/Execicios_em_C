#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
/*Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é: */
float px1,py1,px2,py2,distancia;
printf("DIGITE AS COORDENADAS DO PRIMEIRO PONTO\n");
scanf("%f%f",&px1,&py1);
printf("DIGITE AS COORDENADAS DO SEGUNDO PONTO\n");
scanf("%f%f",&px2,&py2);

//para elevar ao quadrado ultilizarei a função pow w para dira a raiz o sqrt
distancia = sqrt(pow(px2 - px1,2) + pow(py2 - py1,2));
printf("A DISTANCIA E: %f\n",distancia);
system("pause");
	
	
	return 0;
}
