#include <stdio.h>

int main(void){
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d",&idade);
	
	if(idade > 4 && idade <= 7){
		printf("Voce e da categoria pre-mirim");
	}
	else if(idade > 7 && idade <= 10){
		printf("Voce e da categoria mirim");
	}
	else if(idade > 10 && idade <= 13){
		printf("Voce e da categoria infantil");
	}
	else if(idade >13 && idade <= 17){
		printf("Voce e da categoria infanto-juvenil");
	}
	else if(idade >17 && idade <= 20){
		printf("Voce e da categoria juvenil");
	}
	else if(idade>=21){
		printf("Voce e da categoria adulto");
	}
	else{
		printf("Voce nao esta em nenhuma das categoria");
	}
	
	return 0;
}
