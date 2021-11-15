#include<stdio.h>
#include<stdlib.h>

void soma(float*);

int main(){
	float *p;
	p = (float*)malloc(5*sizeof(float));
	soma(p);
	free(p);
	return 0;
}

void soma(float *p){
	int r,ai,an;
	int i;
	p[0]=0;
	printf("DIGITE O TERMO INICIAL E A RAZAO\n");
	scanf("%d%d",&ai,&r);
	for(i=1;i<=10;i++){
		an = ai + (i - 1) * r;
		printf("%d\n",an);
		p[0]+=an;
	}
	printf("A SOMA E: %.f",*(p));
}
