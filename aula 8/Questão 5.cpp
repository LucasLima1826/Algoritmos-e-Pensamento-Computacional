#include <stdio.h>
int main() {
   int n, soma;
   int i=0;
   printf("Digite o numero: ");
   scanf("%d",&n);
   
   while (i<n){
   	i++;
	soma=soma+i;
   }
   printf("A soma de todos os numeros eh: %d\n",soma);
   return 0;
}
