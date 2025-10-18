#include <stdio.h>
#include <stdlib.h>

struct Aluno {
	char name[20];
	int idade;
};

int main() {
	struct Aluno aluno;
	printf("Digite o nome do aluno: ");
	scanf("%s", aluno.name);
	
	printf("Digite a idade de %s: ", aluno.name);
	scanf("%d", &aluno.idade);
	
	printf("%s tem %d anos de idade", aluno.name, aluno.idade);
	
	return 0;
}