#include <stdio.h>
int main(void){
	float salario,bonus;
	int tempo;
	
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	
	printf("Digite seu tempo de casa em anos: ");
	scanf("%d",&tempo);
	
	if(tempo>=5){
		bonus=salario*0.20f;
	}
	else
		bonus=salario*0.10f;
	printf("O valor do bonus e: %.2f",bonus);
	return 0;
}	
