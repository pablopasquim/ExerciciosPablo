#include <stdio.h>
#include <locale.h>

struct Aluno{
	
	char nome[31], disciplina[30];
	float nota1, nota2, notatotal;
};

int main(){
	
	struct Aluno aluno[3];
	int i;
	float media;
	
	for(i=0;i <3;i++){
		printf("Informe o nome: ");
		scanf(" %30[^\n]", aluno[i].nome);
		
		printf("Informe a disciplina: ");
		scanf(" %30[^\n]", aluno[i].disciplina);
		
		printf("Informe a nota 1: ");
		scanf("%f",&aluno[i].nota1);
		
		printf("Informe a nota 2: ");
		scanf("%f",&aluno[i].nota2);
		 
	}
	
	for(i=0;i<3;i++){
		media = (aluno[i].nota1 + aluno[i].nota2)/2;
		aluno[i].notatotal = media;
		
		if(media >= 6){
			printf("\nNome: %s \nTeve a nota: %.2f", aluno[i].nome, aluno[i].notatotal);
			printf("\nDisciplina: %s", aluno[i].disciplina);
			printf("\nNota 1: %.2f", aluno[i].nota1);
			printf("\nNota 2: %.2f", aluno[i].nota2);
		}
	}
	
	

	return 0;
}
