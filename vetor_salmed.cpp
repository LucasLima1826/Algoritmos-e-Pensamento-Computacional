#include <stdio.h>

int main() {
	float soma=0, maior=0, media, vetor[6];
	int  acima=0;
	
	for(int i=0;i<6;i++){
		printf("Digite o %d salario: ",i+1);
		scanf("%f",&vetor[i]);
		soma+= vetor[i];
	}
	
	media=soma/6;
	
	for(int i=0;i<6;i++){
		if(vetor[i]>media){
			acima++;
		}
	}
	
	for(int i=0;i<6;i++){
		if(vetor[i]>maior){
			maior=vetor[i];
		}
	}
	printf("\nA media do salario %.2f\n",media);
	printf("O maior salario foi de %.2f\n",maior);
	printf("Os valores acima da media foi %d\n",acima);
	
    return 0;
}
