#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
// Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e calcule a seguinte expressão: 
int a,b,c,r,s;
float d;

printf("DIGITE OS VALORES DE [A] [B] [C]\n");
scanf("%d%d%d",&a,&b,&c);
r = (a + b) * (a+b);
s = (b + c) * (b + c);

d = (r + s) / 2;
printf("O VALOR DE [R] = %d\nO VALOR DE [S] = %d\nO VALOR DE [D] = %f\n",r,s,d);
return 0;
}
