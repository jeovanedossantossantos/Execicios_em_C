#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
/*Calcular a quantidade de dinheiro gasto por um fumante. 
Dados: o número de anos que ele fuma,o no de cigarros fumados por dia e o preço de uma carteira.*/
int main(){
	// vou considera que em uma carteira de cigarro venha 12 cigarros
	int anos,dias;
	float preco,valor_gasto;
	float um_cigarro;
	
	
	printf("DIGITE QUANTO TEMPO DE FUMANTE\n");
	scanf("%d",&anos);
	printf("DIGITE QUANTOS CIGARROS FUMA POR DIA\n");
	scanf("%d",&dias);
	printf("DIGITE QUANTOS CUSTA UMA CARTEIRA DE CIGARRO\n");
	scanf("%f",&preco);
	
	anos = anos * 365;//convertendo os anos para dias
	um_cigarro = preco / 12;//descobrindo o preco de um cigarro
	valor_gasto = (anos * dias) * um_cigarro;/*nesse calculo sera feito quantos cigarros foram fumados no periodo
que ele foi fumante e multiplicando pelo o preco de uma unidade descobrimos o valor gasto durante todo o periodo*/
	printf("O VALOR GASTO DURANTE ESE PERIODO FOI DE : %.2f\n",valor_gasto);
	
	system("pause");
	return 0;
}
