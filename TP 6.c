#include <stdio.h>
#include <math.h>
float CalcularAreaRectangulo (float base, float altura){
	return base*altura;
}

float CalcularPerimetroRectangulo (float base, float altura){
	return 2*(base*altura);
}
float CalcularDiagonalRectangulo (float base, float altura){
	return sqrt((base*base)+(altura*altura));
}
float CalcularAreaCirculo (float radio){
	return M_PI* radio*radio;
}
float CalcularPerimetroCirculo(float radio){
	return 2*radio* M_PI;
}
	int main(){
		int num;
		printf ("ingrse la figura que desea calcular(rectangulo o circulo)\n");
		printf ("1-retangulo\n");
		printf ("2-circulo\n");
		scanf ("%d",&num);
		
	switch(num){
	case 1:{
		float base, altura;
		printf ("ingrese longuitud del retangulo: ");
		scanf ("%f",&base);
		printf ("\ningrese altura del retangulo: ");
		scanf ("%f",&altura);
		printf ("\nResultados\n");
		float area = CalcularAreaRectangulo (base, altura);
		printf ("el area en:%.2f",area);
		float perimetro = CalcularPerimetroRectangulo (base, altura);
		printf ("\nel perimetro es:%.2f ",perimetro);
		float diagonal = CalcularDiagonalRectangulo ( base, altura);
		printf ("\nla diagonal es:%.2f",diagonal);
		break;}
	case 2:{
		float radio;
		printf("ingrese radio del circulo: ");
		scanf("%f",&radio);
		printf("\nResultado\n");
		float area = CalcularAreaCirculo (radio);
		printf ("el area del circulo es:%.2f\n",area);
		float perimetro = CalcularPerimetroCirculo(radio);
		printf("el perimetro del circulo es:%.2f",perimetro);
		break;}
	}
	
		return 0;
	}
