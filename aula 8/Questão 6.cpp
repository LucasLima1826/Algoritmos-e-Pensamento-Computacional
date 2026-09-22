#include <stdio.h>

int main() {
    int numero;
    int i = 1;
    int soma = 0;

    while (i <= 10) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
        i++;
    }

    printf("A soma dos 10 numeros eh: %d\n", soma);

    return 0;
}
