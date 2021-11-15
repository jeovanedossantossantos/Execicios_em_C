#include<stdio.h>
#include<stdlib.h>

int main(){
	int *m;
	m = (int*)malloc(20*sizeof(int));
	int i,j,rep=0;
	
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			m[rep]=0;
			rep+=1;
		}
	}
	rep=0;
	for(i=0;i<100;i++){
		for(j=0;j<100;j++){
			m[rep]=(rep+1);
			rep+=1;
		}
	}
	rep=0;
	for(j=0;j<(100*100);j++){
		if(rep < 99){
			printf("%d ",*(m+j));
			rep+=1;		
		}
		else{
			printf("%d\n",*(m+j));
			rep=0;
		}
	}
	return 0;
}



