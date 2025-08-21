#include <stdio.h>

int main(int argc, char *argv[]) {
	char name[20] = "";
	char email[20] = "";
	char status;
	int idade = 0;
	float altura = 0;
	double salario = 0;
	
	
	printf("Digite seu nome: ");
	scanf("%s", &name);
	
	printf("Digite seu e-mail: ");
	scanf("%s", &email);
	
	fflush(stdin);
	printf("Digite seu status: ");
	scanf("%c", &status);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	fflush(stdin);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu salario: ");
	scanf("%lf", &salario);
	
	printf("Nome: %s\n", name);
	printf("E-mail: %s\n", email);
	printf("Status: %c\n", status);
	printf("Idade: %d\n", idade);
	printf("Altura: %.2f\n", altura);
	printf("Salario %.2f\n", salario);
		
	return 0;
}