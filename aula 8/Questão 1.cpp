#include <stdio.h>

int main(void){
	
	for(int i=1;i<=100;i++){
		if(i==1){
			continue;
		}
		printf("numero: %d\n", i);
	}

	return 0;
}
