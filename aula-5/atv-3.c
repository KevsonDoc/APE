#include <stdio.h>

int main() {
	int first_number = 0;
	int second_number = 0;
	
	printf("Informe N1: ");
	scanf("%d", &first_number);
	
	
	printf("Informe N2: ");
	scanf("%d", &second_number);
	
	printf("RESULTADO: %d", first_number - second_number);
	
	return 0;
}