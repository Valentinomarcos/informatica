#include <stdio.h>

int main (int argc, char **argv){
	float peso;
	float altura;
	float bmi;
	do{
			printf("Introduce tu peso en kilogramos: ");
	scanf("%f", &peso);
	if(peso<=0){
		
		printf("\nerror: tiene que ser positivo");
	}
	} while(peso<=0);
	do{
		printf("Introduce tu altura en metros: ");
	scanf("%f", &altura);
	if(altura<=0){
		printf("\nerror: tiene que ser positivo");
	}
	}while (altura<=0);

	bmi = peso / (altura * altura);

	printf("\nSu índice de masa corporal es: %.2f\n\n", bmi);

	printf("Idice de condicion es: \n");
	printf("-----------------------------\n");
	printf("< 18.5        Bajo peso\n");
	printf("18.5 _ 24.9   Peso Normal\n");
	printf("25.0 _ 29.9   Sobrepeso\n");
	printf(">= 30.0       Obesidad\n");
	
	// Nueva parte: determinar condición del usuario
	if (bmi < 18.5) {
		printf("\nUsted se encuentra en la condición: Bajo peso\n");
	} else if (bmi < 25.0) {
		printf("\nUsted se encuentra en la condición: Normal\n");
	} else if (bmi < 30.0) {
		printf("\nUsted se encuentra en la condición: Sobrepeso\n");
	} else {
		printf("\nUsted se encuentra en la condición: Obesidad\n");
	}
return 0;
}
