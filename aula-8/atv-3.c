#include <stdio.h>
#include <string.h>

struct Adress {
	char adress_name[30];
	int number;
	char complement[20];
	char cep[20];
};

struct Aluno {
	char name[20];
	int idade;
	struct Adress adress;
};

int main() {
	struct Aluno aluno;
	aluno.idade = 45;
	aluno.adress.number = 100;
	
	strcpy(aluno.name, "Kevson");
	strcpy(aluno.adress.adress_name, "Rua 8");
	strcpy(aluno.adress.complement, "no mesmo predio da padaria");
	strcpy(aluno.adress.cep, "72.003-600");
	
	printf("================== Aluno ================== \n");
	printf("Nome: %s\n", aluno.name);
	printf("Idade: %d \n", aluno.idade);
	printf("================== Edereco ================== \n");
	printf("%s ", aluno.adress.adress_name);
	printf("numero %d \n", aluno.adress.number);
	printf("Complemento: %s \n", aluno.adress.complement);
	printf("CEP: %d\n", aluno.adress.number);
	
	return 0;
}