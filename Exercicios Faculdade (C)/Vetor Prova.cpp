#include <stdio.h>

int main(){

int vetor[5], menor, i;

for(i=0;i < 5; i++){
	printf("Informe o número: ");
	scanf("%d", &vetor[i]);
}

menor = vetor[0];

for(i=1;i<5;i++){
	if(vetor[i] <  menor){
		menor = vetor[i];
	}
}

vetor[0] = menor;

for(i=0;i<5;i++){
	printf("\n%d", vetor[i]);
}



return 0;
}
