#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

struct Produto{
	int codigo, quantidade, pedida;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	struct Produto p[5] = {{1,10}, {2,10}, {3,10}, {4,10}, {5,10}};

	int codigo_produto, quantidade_pedida, i;
	bool encontrado;
	
	encontrado = false;
	
	printf("Informe código do produto: ");
	scanf("%d", &codigo_produto);
	
	for(i = 0; i < 5; i++){
		if(p[i].codigo == codigo_produto){
			encontrado = true;
		}
	}
	
	if(encontrado == false){
		printf("Produto inexistente!");
		return 0;
	}
	

	
	printf("Informe a quantida desejada: ");
	scanf("%d", &quantidade_pedida);
	
	for(i = 0; i < 5; i++){
		if(p[i].codigo == codigo_produto){
			
			encontrado = true;
			
			if(p[i].quantidade >= quantidade_pedida){
				p[i].quantidade -= quantidade_pedida;
				printf("\nEstoque atualizado!");
				printf("\nProduto: %d", p[i].codigo);
				printf("\nEstoque atual: %d", p[i].quantidade);
				break;
			}
			else{
				printf("Estoque insuficiente!");
			}
		}
	}
	
	
	
	return 0;
}
