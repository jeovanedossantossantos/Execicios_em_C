#include<stdio.h>
#include<stdlib.h>
/* Escreva uma fun��o que recebe as 3 notas de um aluno e uma letra. Se a letra for A, 
a fun��o calcula a m�dia aritm�tica das notas do aluno, se for P, a sua m�dia ponderada (pesos: 5, 3 e 2). 
A m�dia calculada deve retornar ao programa principal*/

float media(float, float, float, char);

int main(){
	float a,b,c;
	char d;
	
	printf("DIGITA AS TRES NOTAS DO ALUNO\n");
	scanf("%f%f%f",&a,&b,&c);
	
	printf("QUAL SERA O TIPO DE CALCULO\n[A] = MEDIA ARITIMETRICA\n[P] = MEDIA PONDERADA\n");
	scanf("%s",&d);
	
	float dev = media(a,b,c,d);
	
	printf("%f a media",dev);
	return 0;
}
 float media(float x, float y , float w, char z ){
 	
 	if((z == 'A')||(z == 'a')){
 		return ((x+y+w)/3);
	 }
	 else if((z == 'P')||(z == 'p')){
	 	return((x*0.5 + y*0.3 + w*0.2));
	 }
 	else{
 		return 0;
	 }
 }
