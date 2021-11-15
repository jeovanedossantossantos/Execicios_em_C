#include<stdio.h>
#include<stdlib.h>

int primo(int);
int main(){
	int p;
	printf("DIGITE UM NUMERO\n");
	scanf("%d",&p);
	int res=primo(p);
	if(res==1){
		printf("E PRIMO\n");
	}
	else{
		printf("NAO E PRIMO\n");
	}
	int i,j,soma=0;
		for(i=1;i<=p;i++){
			int r=primo(i);
			if(r==1){
				soma+=i;
				printf("%d ",i);
			}
		}
	printf("\nA SOMA E = %d\n",soma);
	
	return 0;
}

int primo(int n){
	
	int i,rep=0;
	for(i=1;i<=n;i++){
		if(n % i == 0){
			rep+=1;
		}
	}
	if((rep == 2) && (n != 1)){
		return 1;
	}
	else{
		return 0;
	}
	
}
