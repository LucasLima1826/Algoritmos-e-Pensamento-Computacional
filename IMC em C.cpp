#include <stdio.h>
#include <math.h>

 int main (){
 	float peso;
 	float altura;
 	
 	printf("Digite seu peso: ");
 	scanf("%f",&peso);
 	
 	printf("Digite sua altura: ");
 	scanf("%f",&altura);
 	
	float IMC = peso/pow(altura,2);
 	printf("O indice de massa corporal eh %.2f", IMC);
 	
 	return 0;
 }
