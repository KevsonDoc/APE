#include <stdio.h>
#include <string.h>

//int main(int argc, char *argv[]) {
//	struct Adress {
//		char adress[50];
//		char number;
//		char complement[100];
//		char city[100];
//		char cep[10];
//	};
//	struct Student {
//		char name[50];
//		float nota[2];
//		char gender
//	};
//	Student student[20];
//	
//	while ((c = getchar()) != '\n' && c != EOF) {
//		scanf("%s", )
//	}
//	return 0;
//}

//int main() {
//	char name_1[20];
//	char name_2[20];
//	
//	printf("Digite name 1: ");
//	scanf("%s", name_1);
//	
//	fflush(stdout);
//	
//	printf("Digite name 2: ");
//	scanf("%s", name_2);
//
//	printf("nome1: %s - nome2: %s", name_1, name_2);
//	
//	return 0;
//}

int main() {
	char name[100];
	printf("Digite seu nome: ");
	scanf("%s[^\n]", name);
	printf("%s", &name);
}
