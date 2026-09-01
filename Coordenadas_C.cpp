#include<stdio.h>
#include<math.h>

int main (){
	float x1, x2, y1, y2;
	
	printf("Digite a coordenada x do 1 ponto: ");
	scanf("%f",&x1);
	
	printf("Digite a coordenada y do 1 ponto: ");
	scanf("%f",&y1);
	
	printf("Digite a coordenada x do 2 ponto: ");
	scanf("%f",&x2);
	
	printf("Digite a coordenada y do 2 ponto: ");
	scanf("%f",&y2);
	
	float coox = x1 - x2;
    float cooy = y1 - y2;
    
    float dist = sqrt((coox * coox) + (cooy * cooy));
    
    printf("A distancia entre os pontos e %.2f\n", dist);
    
	return 0;
}
