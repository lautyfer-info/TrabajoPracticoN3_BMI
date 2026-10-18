// Repositorio:

#include <stdio.h>

#define TAM 5

int main() {
	int codigos[TAM];
	float precios[TAM];
	
	int pos_mayor = 0;
	int pos_menor = 0;
	
	for (int i = 0; i < TAM; i++) {
		do {
			printf("Ingrese el código de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			if (codigos[i] < 1 || codigos[i] > 999999999) {
				printf("Error. El código de barras debe estar entre 1 y 999999999\n");
			}
		} while (codigos[i] < 1 || codigos[i] > 999999999);
		
		do {
			printf("Ingrese el precio: ");
			scanf("%f", &precios[i]);
			if (precios[i] < 0) {
				printf("Error. El precio no puede ser negativo\n");
			}
		} while (precios[i] < 0);
		
		printf("\n");
	}
	
	printf("\nCódigo\t\tPrecio\n");
	for (int i = 0; i < TAM; i++) {
		printf("%7d\t\t%.2f\n", codigos[i], precios[i]);
	}
	
	for (int i = 1; i < TAM; i++) {
		if (precios[i] > precios[pos_mayor]) {
			pos_mayor = i;
		}
		if (precios[i] < precios[pos_menor]) {
			pos_menor = i;
		}
	}
	
	printf("\nMás caro: [%d] %.2f", codigos[pos_mayor], precios[pos_mayor]);
	printf("\nMás barato: [%d] %.2f\n", codigos[pos_menor], precios[pos_menor]);
	
	return 0;
}
