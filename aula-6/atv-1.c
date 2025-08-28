#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1 = 0, n2 = 0;
	
	printf("N1: ");
	scanf("%d", &n1);
	
	printf("N2: ");
	scanf("%d", &n2);
	
	if (n1 == n2) {
		printf("%d e igual a %d", n1, n2);
	} else {
		if (n1 > n2) {
			if (n1 % 2 == 0) {
				printf("N1 e o maior e par!");
			} else {
				printf("N1 e o maior e inpar!");
			}
		} else {
			if (n2 % 2 == 0) {
				printf("N2 e o maior e par!");
			} else {
				printf("N2 e o maior e inpar!");
			}
		}
	}

	printf("  ._______________________________________.\n");
	printf(" /                                         \\\n");
	printf("/-------------------------------------------\\\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |         L                           |\n");
	printf("|     |                                     |\n");
	printf("|     |              E                      |\n");
	printf("|     |                                     |\n");
	printf("|     |                   I                 |\n");
	printf("|     |                                     |\n");
	printf("|     |                         T           |\n");
	printf("|     |                                     |\n");
	printf("|     |                             E       |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|     |                                     |\n");
	printf("|_____|_____________________________________|\n");
	
	return 0;
}