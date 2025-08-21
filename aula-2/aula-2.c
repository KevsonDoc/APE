#include <iostream>

// Alocação de espaço em memória
// 
int main() {
	int idade = 0;
	float altura = 0;
	float peso = 0;
	char status;  

	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite sua peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua status: ");
	scanf("%i", &status);
	
	printf("Idade: %d \n", idade);
	printf("Altura: %.2f \n", altura);
	printf("Peso: %.2f \n", peso);
	printf("Status: %c \n", status);
	return 0;
}