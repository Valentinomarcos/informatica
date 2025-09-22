#include <stdio.h>

#define TAM 5 // Cantidad fija de productos a ingresar

int main() {
	long long codigo_barras[TAM];
	float precios[TAM];
	float mayor_precio, menor_precio;
	long long codigo_mayor, codigo_menor;
	int i;
	
	// a. Solicitud y carga de productos
	printf("--- Carga de Productos ---\n");
	for (i = 0; i < TAM; i++) {
		printf("\nProducto %d:\n", i + 1);
		
		// c. Validar código de barras
		do {
			printf("Ingrese el codigo de barras (entero positivo de hasta 9 cifras): ");
			scanf("%lld", &codigo_barras[i]);
			if (codigo_barras[i] <= 0 || codigo_barras[i] > 999999999) {
				printf("Error: El codigo de barras no es valido. Debe ser un entero positivo de hasta 9 cifras.\n");
			}
		} while (codigo_barras[i] <= 0 || codigo_barras[i] > 999999999);
		
		// b. Validar precio
		do {
			printf("Ingrese el precio (con decimales y no negativo): ");
			scanf("%f", &precios[i]);
			if (precios[i] < 0) {
				printf("Error: El precio no puede ser negativo.\n");
			}
		} while (precios[i] < 0);
	}
	
	// d. Mostrar lista completa
	printf("\n--- Lista Completa de Productos ---\n");
	for (i = 0; i < TAM; i++) {
		printf("Codigo de barras: %lld, Precio: %.2f\n", codigo_barras[i], precios[i]);
	}
	
	// e. y f. Encontrar el mayor y menor precio
	mayor_precio = precios[0];
	codigo_mayor = codigo_barras[0];
	menor_precio = precios[0];
	codigo_menor = codigo_barras[0];
	
	for (i = 1; i < TAM; i++) {
		if (precios[i] > mayor_precio) {
			mayor_precio = precios[i];
			codigo_mayor = codigo_barras[i];
		}
		if (precios[i] < menor_precio) {
			menor_precio = precios[i];
			codigo_menor = codigo_barras[i];
		}
	}
	
	printf("\n--- Estadisticas ---\n");
	printf("El mayor precio es: %.2f (Codigo de barras: %lld)\n", mayor_precio, codigo_mayor);
	printf("El menor precio es: %.2f (Codigo de barras: %lld)\n", menor_precio, codigo_menor);
	
	return 0;
}
