#include <stdio.h>
#include <stdlib.h>	

int main() {
	int idade = 0, em_dez_anos = 0;
	idade = 10;
	
	float altura = 2.10;
	printf("Idade: %d\nAltura %.2f", idade, altura);
	
	em_dez_anos += idade;
	printf("\nEm 10 anos tera a idade: %d", idade + em_dez_anos);
	return 0;
}