#include <stdio.h>
#include <string.h>

struct Produto {
	char name[20];
	float amount;
};

int main() {
	struct Produto produto_1, produto_2;
	aluno.idade = 45;
	aluno.adress.number = 100;
	
	strcpy(produto_1.name, "Açai");
	produto_1.amount = 10.5;
	
	strcpy(produto_2.name, "Queijo");
	produto_2.amount = 16.4;
	
	printf("%s custa R$ %.2f \n", produto_1.name, produto_1.amount);
	printf("%s custa R$ %.2f", produto_2.name, produto_2.amount);
	
	return 0;
}