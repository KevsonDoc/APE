#include <stdio.h>
#include <string.h>


int main() {
	struct Endereco {
		char logradouro[50];
		char numero;
		char cep[10];
	};
	struct Aluno {
		char nome[100];
		int idade;
		struct Endereco endereco[02];
		float nota[3];
		int adicionado;
	};
	
	int max_aluno = 50;
	struct Aluno aluno[max_aluno];
	
	char menu;
	int i;
	for (i = 0; menu != 'S' && i <= (max_aluno - 1); i++) {
		printf("Digite S para sair ou A para adicionar aluno\n");
		scanf(" %c", &menu);
		
		if (menu == 'A') {
			printf("Aluno N: %d \n", i + 1);
			printf("Nome: \n");
			scanf("%s", aluno[i].nome);
			printf("Idade: \n");
			scanf("%d", &aluno[i].idade);
			printf("Logradouro: \n");
			printf("Numero: \n");
			printf("CEP: \n");
			printf("N1: \n");
			printf("N2: \n");
			printf("N3: \n");
			aluno[i].adicionado = 1;
		} else {
			aluno[i].adicionado = 0;
		}
	};
	
	int interable;
	for(interable = 0; interable <= (max_aluno - 1); interable++) {
		if (aluno[interable].adicionado == 1) {
			printf("Nome: %s\n", aluno[interable].nome);
			printf("Idade: %d\n", aluno[interable].idade);
		} else {
			return 1;
		}
	}

	return 0;
}