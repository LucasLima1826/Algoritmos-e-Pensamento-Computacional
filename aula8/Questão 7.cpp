#include <stdio.h>

int main(void) {
    int valor;
    int negativo = 0;
    
    printf("Digite 10 valores inteiros:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);
        
        if (valor < 0) {
            negativo++;
        }
    }
    
    printf("\nTotal de numeros negativos digitados: %d\n", negativo);
    
    return 0;
}
