#include <stdio.h>
#include <string.h>

struct categoria {
	int id;
	char title;
};

char sub_menu_options[6][10] = {"Categoria", "Fornecedor", "Produto", "Marcar", "UF", "Cidade"};

int le_valida_sub_menu(int index_sub_menu_options) {
	int sub_menu = sub_menu_options[index_sub_menu_options - 1];
	printf("(1) Adicionar %s\n", &sub_menu_options);
	printf("(2) Listar %s\n", &sub_menu_options);
	printf("(3) Atualizar %s\n", &sub_menu_options);
	printf("(4) Deletar %s\n", &sub_menu_options);
	printf("(5) Voltar\n\n");
	
	printf("Digite uma opcao do menu: ");
	int menu_options;
	
	scanf("%d", &menu_options);
	return sub_menu;
}

int le_valida_opcao_menu() {
	printf("============================= *** ADMIN *** =============================\n");
	printf("(1) Categoria\n");
	printf("(2) Fornecedor\n");
	printf("(3) Produto\n");
	printf("(4) Marca\n");
	printf("(5) UF\n");
	printf("(6) Cidade\n");
	printf("(7) Relatorios\n");
	printf("(8) Sair\n\n");
	
	printf("Digite uma opcao do menu: ");
	int menu_options;
	scanf("%d", &menu_options);

	switch(menu_options) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		default:
			system("cls");
			printf("Comando invalido! Digite novamente.\n");
	}
	
	return menu_options;
}

int main() {
	int menu_options;
	
	do {
		menu_options = le_valida_opcao_menu();
		printf("%d", menu_options);
	} while (menu_options != 8);
//	struct Endereco {
//		char logradouro[50];
//		char numero;
//		char cep[10];
//	};
//	struct Aluno {
//		char nome[100];
//		int idade;
//		struct Endereco endereco[02];
//		float nota[3];
//		int adicionado;
//	};
//	
//	int max_aluno = 50;
//	struct Aluno aluno[max_aluno];
//	
//	char menu;
//	int i = 0;
//	int max_age = 0;
//	do {
//		printf("Digite S para sair ou A para adicionar aluno: ");
//		scanf(" %c", &menu);
//		
//		if (menu == 'A') {
//			printf("Aluno N: %d \n", i + 1);
//			printf("Nome: ");
//			scanf(" %[^\n]s", aluno[i].nome);
//			printf("Idade: ");
//			scanf("%d", &aluno[i].idade);
//			if (aluno[i].idade >= max_age) {
//				max_age = aluno[i].idade;
//			}
//			aluno[i].adicionado = 1;
//			i++;
//		} else {
//			aluno[i].adicionado = 0;
//		}
//	} while (menu != 'S' && i <= (max_aluno - 1));
//	
//	printf("Maior idade do conjunto %d\n", max_age);
//	printf("============================ Alunos Cadastrados ============================\n");
//	int interable;
//	for(interable = 0; interable <= (max_aluno - 1); interable++) {
//		if (aluno[interable].adicionado == 1 && aluno[interable].idade >= max_age) {
//			printf("Nome: %s\n", aluno[interable].nome);
//			printf("Idade: %d\n", aluno[interable].idade);
//		}
//	}

	return 0;
}