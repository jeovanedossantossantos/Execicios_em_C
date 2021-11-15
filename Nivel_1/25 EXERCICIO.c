#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char sexo;
	
	while(1){
		printf("DGITE\n[M] = MASCULINO\n[F] = FEMININO\n");
		scanf("%s",&sexo);
		
		if (sexo == 'M' || sexo == 'm'){
			break;
		}
		else if(sexo == 'F' || sexo == 'f'){
			break;
		}
	}
	return 0;
}
