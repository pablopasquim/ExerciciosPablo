#include <stdio.h>
#include <locale.h>

struct loja{
	
	char nome_loja[31];
	float preco;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	struct loja l[5];
	int i;
	float media, soma;
	
	soma = 0;
	media = 0;
	
	for(i=0;i <5;i++){
		printf("Informe o nome da loja: ");
		scanf(" %30[^\n]", l[i].nome_loja);

		printf("Informe o preço do Tablet: ");
		scanf("%f", &l[i].preco);
		
		soma += l[i].preco;
}

		media = soma/5;
		
	for(i=0;i <5;i++){
		if(l[i].preco < media){
			printf("\nNome da Loja: %s ", l[i].nome_loja);
  			printf("\nPreço: %.2f ", l[i].preco);
	}

}

	printf("\nMédia de preço (%.2f):\n", media);

	
	return 0;
}
