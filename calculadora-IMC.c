#include <stdio.h>

int main (int argc, char **argv){
	float peso;
	float altura;
	float bmi;


	printf("Introduce tu peso en kilogramos: ");
	scanf("%f", &peso);

	printf("Introduce tu altura en metros: ");
	scanf("%f", &altura);

	bmi = peso / (altura * altura);

	printf("\nSu �ndice de masa corporal es: %.2f\n\n", bmi);

	printf("Idice de condicion es: \n");
	printf("-----------------------------\n");
	printf("< 18.5        Bajo peso\n");
	printf("18.5 _ 24.9   Peso Normal\n");
	printf("25.0 _ 29.9   Sobrepeso\n");
	printf(">= 30.0       Obesidad\n");
	
	// Nueva parte: determinar condici�n del usuario
	if (bmi < 18.5) {
		printf("\nUsted se encuentra en la condici�n: Bajo peso\n");
	} else if (bmi < 25.0) {
		printf("\nUsted se encuentra en la condici�n: Normal\n");
	} else if (bmi < 30.0) {
		printf("\nUsted se encuentra en la condici�n: Sobrepeso\n");
	} else {
		printf("\nUsted se encuentra en la condici�n: Obesidad\n");
	}
return 0;
}
