#include <stdio.h>

 int main(void){
	 
	 int nota;
	 
	printf("ingrese una nota  ");
	scanf("%d", &nota);
	
	if ( nota >= 90 )
	{
		printf("calificacion A");
	}
	else if ( nota >= 80 )
	{
		printf (" calificacion B ");
	}
	else if ( nota >= 70 )
	{
		printf(" calificacion C ");
	}
	else if ( nota >= 60 )
	 {
		 printf(" calificacion D ");
	 }
	else 
		{
		 printf(" Calificacion F ");
	 }
	
	return 0;
}
