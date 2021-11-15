#include<stdio.h>
#include<stdlib.h>

float media(float, float, char);

int main(){
	float a = 10.0,b=10.0;
	char c='b';
	printf("%f",media(a,b,c));
	
	return 0;
}

float media(float a, float b, char c){
	float d;
	if(c == 'b'){
		return (a + b);
	} 
}
