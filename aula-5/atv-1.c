#include <stdio.h>

int main() {
	char firstName[20];
	char lastName[20];
	char complete_name[50];
	
	printf("Digite seu nome: ");
	scanf("%s", &firstName);
	
	fflush(stdin);
	printf("Digite seu sobrenome: ");
	scanf("%s", &lastName);
	
	printf("Nome informado: %s %s \n", firstName, lastName);
	printf("-----------------------------------------------\n");

	fflush(stdin);

	printf("Informe nome completo: ");
	scanf("%[^\n]s", &complete_name);

	printf("Nome completo: %s", complete_name);
	return 0;
}