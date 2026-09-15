#include <stdio.h>
int main(void){
	
	float qtdcom;
	char comb;
	
	printf("Qual e o combustivel (Em a, d, g): ");
	scanf("%c",&comb);
	
	if (comb=='a'|| comb=='d' ||comb=='g'){
		printf("digite quantidade que deseja(em litros): ");
		scanf("%f",&qtdcom);
		
		if(comb=='a'){
			printf("O valor vai ser pago em reais: %.2f ",(qtdcom*1.7997f));
		}
		
		else if(comb=='d'){
			printf("O valor vai ser pago em reais: %.2f ",(qtdcom*0.9798f));
		}
		
		else if(comb=='g'){
			printf("O valor vai ser pago em reais: %.2f ",(qtdcom*2.1009f));
		}
	}
	else{
		printf("gasolina nao encontrada");
	}
	return 0;
}	
