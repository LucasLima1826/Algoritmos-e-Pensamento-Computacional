#include <stdio.h>

int main(void) {
    int cont;
    int i = 1;
    int soma = 0;

    while (1) {
        printf("Digite o %d numero para soma (para parar digite 0): ", i);
        scanf("%d", &cont);
        
        if (cont == 0) {
            break;
        }
        
        soma = soma + cont;
        i++;
    }
    
    printf("\nA soma dos numeros e: %d\n", soma);
    
    return 0;
}
