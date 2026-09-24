#include <stdio.h>

int main(void) {
    int n;
    int contador = 0;
    int impar = 1;
    
    printf("Digite o seu numero inteiro: ");
    scanf("%d", &n);

    while (contador < n) {
        printf("Numero impar: %d\n", impar);
        
        impar += 2;
        contador++;
    }
    
    return 0;
}
