#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char poli(char *);

int main(){
	char *p;
	p = (char *)malloc(5*sizeof(char));
	
	printf("DIGITE UMA PALAVRA\n");
	scanf("%s",p);
	
	poli(p);
	free(p);
	return 0;
}

char poli(char *p){
	int t = strlen(p) - 1;
	int i,cont=0;
	for(i=0;i<strlen(p);i++){
		if(p[i] == p[t - i] ){
			cont+=1;
		}
	}
	if(cont == strlen(p)){
		printf("E Palindromo\n");
	}
	else{
		printf("NAO E Palindromo\n");
	}
}
