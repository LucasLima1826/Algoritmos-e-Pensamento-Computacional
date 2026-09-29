#include <stdio.h>

int main() {
	float soma=0, media, acima, vetor[8];
	
	for(int i=0;i<8;i++){
		printf("Digite sua %d nota: ",i+1);
		scanf("%f",&vetor[i]);
		soma+= vetor[i];
	}
	media=soma/8;
	for(int i=0;i<8;i++){
		if(vetor[i]>media){
			acima+=1;
		}
	}
	printf("A media da nota do aluno foi %.0f\nOs valores acima da media foi %.0f\n",media,acima);
	
    return 0;
}
