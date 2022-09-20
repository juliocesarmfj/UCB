#include <stdio.h>
#include <math.h>

int main (){
int base, expoente, resultado;
	
printf ("digite o base de a: ");
scanf ("%i", &base);

printf ("digite o expoente de b: ");
scanf ("%i", &expoente);	
	
resultado = pow(base,expoente);
	
printf("resultado: %i", resultado);	


}
