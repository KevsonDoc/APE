#include <stdio.h>
#include <string.h>

struct Aluno {
	char name[20];
	int idade;
};

int main() {
	struct Aluno aluno[20];
	
	printf("Informe o nome: ");
	scanf("%s", aluno[0].name);
	
	printf("Informe a idade: ");
	scanf("%d", &aluno[0].idade);

	printf("Nome: %s\n", aluno[0].name);
	printf("Idade: %d \n", aluno[0].idade);
	
	printf("Aluno 1 - %s - %d", aluno[0].name, aluno[0].idade);
	
	return 0;
}