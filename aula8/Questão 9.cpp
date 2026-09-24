#include <stdio.h>

int main(void){
	int i=1;
	
	while(i<=100){
		if(i%3==0){
			printf("Numero multiplo de 3: %d\n",i);
		}
	i++;
	}
	return 0;
}

