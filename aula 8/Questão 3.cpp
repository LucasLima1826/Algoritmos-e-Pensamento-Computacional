#include <stdio.h>
int main() {
   int contagem = 10;
   do {
       printf("Contador: %d\n", contagem);
       contagem--;
   } while (contagem>=0);
   printf("Fim da contagem");
   return 0;
}
