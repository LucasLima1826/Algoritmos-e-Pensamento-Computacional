#include <stdio.h>

int main() {
  
    float vetor[4];

    for(int i = 0; i < 4; i++) {
        printf("Digite o salario do %d funcionario: ", i + 1);
        scanf("%f", &vetor[i]); // %f para ler float
    }
    for(int i = 0; i < 4; i++) {
        printf("Funcionario %d: R$ %.2f\n", i + 1, vetor[i]);
    }
    
    return 0;
}
