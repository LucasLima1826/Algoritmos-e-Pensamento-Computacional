#include<stdio.h>

int main (){
	float nt1;
	float nt2;
	float nt3;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nt1);
	
	printf("Digite a segunda nota: ");
	scanf("%f",&nt2);
	
	printf("Digite a terceira nota: ");
	scanf("%f",&nt3);
	
	printf("A media da nota do aluno foi %.2f",(nt1*1 + nt2*2 + nt3*4)/(1+2+4));
	
	return 0;
}
