#include<stdio.h>
#include<math.h>

int main () {
	float largura;
	float comprimento;
	float caixa;
	float caixaarea=2.5;
	
	printf("Digite a largura da area: ");
	scanf("%f", &largura);
	
	printf("Digite o comprimento da area: ");
	scanf("%f", &comprimento);
	
	printf("Digite o valor de cada caixa: ");
	scanf("%f", &caixa);
	
	float area= comprimento*largura;
	
	float qtdcaixa=area/caixaarea;
	
	float vltl=qtdcaixa*caixa;
	
	printf("A area total a ser revestida e %.2f\n", area);
	printf("Quantidade de caixas necessarias e %.2f\n", qtdcaixa);
	printf("Custo total da compra e %.2f\n", vltl);
	
	return 0;
}
