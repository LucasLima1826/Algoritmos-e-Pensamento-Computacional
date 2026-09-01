#include <stdio.h>

int main(){
	int idade;
	float altura;
	char inicial;
	
	//Solicitação e leitura de dados
	printf("Digite a inicial do seu nome: ");
	scanf("%c", &inicial);//O espaço antes de %c limpa o buffer do teclado
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: ");
	scanf("%f",&altura);
	
	//apresentação dos dados guardados
	printf("\n---Dados Registrados---\n");
	printf("Inicial: %c\n",inicial);
	printf("Idade: %d anos\n",idade);
	printf("altura: %.2f metros\n",altura);
	
	return 0;
}
