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
	int i = 0;
	int max_age = 0;
	do {
		printf("Digite S para sair ou A para adicionar aluno: ");
		scanf(" %c", &menu);
		
		if (menu == 'A') {
			printf("Aluno N: %d \n", i + 1);
			printf("Nome: ");
			scanf(" %[^\n]s", aluno[i].nome);
			printf("Idade: ");
			scanf("%d", &aluno[i].idade);
			if (aluno[i].idade >= max_age) {
				max_age = aluno[i].idade;
			}
//			printf("Logradouro: \n");
//			printf("Numero: \n");
//			scanf("%d", &aluno[i].endereco.numero);
//			printf("CEP: \n");
//			printf("N1: \n");
//			printf("N2: \n");
//			printf("N3: \n");
			aluno[i].adicionado = 1;
			i++;
		} else {
			aluno[i].adicionado = 0;
		}
	} while (menu != 'S' && i <= (max_aluno - 1));
	
	printf("Maior idade do conjunto %d\n", max_age);
	printf("============================ Alunos Cadastrados ============================\n");
	int interable;
	for(interable = 0; interable <= (max_aluno - 1); interable++) {
		if (aluno[interable].adicionado == 1 && aluno[interable].idade >= max_age) {
			printf("Nome: %s\n", aluno[interable].nome);
			printf("Idade: %d\n", aluno[interable].idade);
		}
	}

	return 0;
}