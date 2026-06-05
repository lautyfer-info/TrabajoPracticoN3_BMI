#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float p,a, imc;
	
	printf("Ingrese el peso en kg: "); scanf("%f", &p);
	printf("Ingrese la altura en metros: "); scanf("%f", &a);
	
	imc= (p/(a*a));
	
	printf("\nSu IMC es: %.2f\n", imc);
	printf("\nIndice    |  Condicion\n -------------------\n  <18.5  | bajo peso\n 18.5 a 24.9 | Normal\n 25.0 a 29.9 | Sobrepeso\n >=30 | Obesidad");
	
	return 0;
}

