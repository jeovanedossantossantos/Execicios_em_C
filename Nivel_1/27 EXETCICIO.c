/*Escreva um programa para verificar se um inteiro dado � um quadrado perfeito, exibindo, se afirmativo, sua raiz quadrada.
 Um n�mero perfeito � um n�mero para qual a soma de todos os seus divisores � igual ao pr�prio n�mero. 
 Ex: 6 � um n�mero perfeito.*/
 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
int main(){
	int n,i,s=0,j=0;
	float raiz=0;
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n % i == 0){
			j = j +  i;
		}
	}
	if(j == n){
		printf("E UM NUMERO PERFEITO\n");
	}
	else{
		printf("NAO E NUMERO PERFEIRO\n");
	}
	raiz = sqrt(n);
	for(i=0;i<raiz;i++){
		s+=1;
	}
	//printf("%f",raiz);
	float res;
	res = raiz - s;
	if (res == 0){
		printf("A raiz e: %.f",raiz);
	}
 	else{
 		printf("Mas nao possui raiz perfeita\n");
	 }
return 0;
 }
