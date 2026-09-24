#include <stdio.h>
int main() {
   int numero;
   int i=1;
   int resultado;
   
   printf("Digite o numero que deseja ver a tabuada: ");
   scanf("%d",&numero);
   
   while(i>0 && i<=10){
		resultado=i*numero;
		printf("%d X %d : %d\n",numero,i,resultado);
		i++;
   }
   
   return 0;
}
