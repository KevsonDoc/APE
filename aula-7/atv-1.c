#include <stdio.h>

int soma(int number_one, int number_two);
int sub(int number_one, int number_two);
int div(int number_one, int number_two);
int multi(int number_one, int number_two);
char input_validate_op();

int main() {
	int input_number_one = 0, input_number_two = 0, result = 0;
	char op;

	printf("N1: ");
	scanf("%d", &input_number_one);
	
	op = input_validate_op();
	
	printf("N2: ");
	scanf("%d", &input_number_two);
	
	switch (op) {
		case '+':
			printf("resultado: %d", soma(input_number_one, input_number_two));
			break;
		case '-':
			printf("resultado: %d", sub(input_number_one, input_number_two));
			break;
		case '*':
			printf("resultado: %d", multi(input_number_one, input_number_two));
			break;
		case '/':
			printf("resultado: %d", div(input_number_one, input_number_two));
			break;
		default:
			printf("Menu invalido");
	}
	
	return 0;
}

int soma(int number_one, int number_two){
	int result = number_one + number_two;

	return result;
}

int sub(int number_one, int number_two){
	int result = number_one - number_two;

	return result;
}

int div(int number_one, int number_two){
	int result = number_one / number_two;

	return result;
}

int multi(int number_one, int number_two){
	int result = number_one * number_two;

	return result;
}

char input_validate_op() {
	char op;
	int count = 0;
	
	do {
		if (count > 0) {
			system("cls");
			printf("============================================");
			printf(" > Operador invalido, ultilize (+ - * /)\N");
			printf("============================================");
		}
		printf("OP: ");
		scanf(" %c", &op);
		count++;
	} while (op !='+' && op !='-' && op !='*' && op !='/');
	
	return op;
}


