#include <stdio.h>

int main() {
	int value = 0;
	printf("Inserisci un valore e ti diro' cos'e'...\n");
	scanf("%d", &value);
	if (value == 0) {
		printf("Il valore e' zero.\n");
	} else if (value < 0) {
		printf("Il valore e' negativo.\n");
	} else {
		printf("Il valore e' positivo.\n");
	}
	
	return 0;
} 