#include <stdio.h>

int main(int argc, char *argv[]) {
	
	float p,a, imc;
	
	printf("Ingrese el peso en kg: "); scanf("%f", &p);
	printf("Ingrese la altura en metros: "); scanf("%f", &a);
	
	imc= (p/(a*a));
	
	printf("\nSu IMC es: %.2f\n", imc);
	printf("\nIndice    |  Condicion\n -------------------\n  <18.5  | bajo peso\n 18.5 a 24.9 | Normal\n 25.0 a 29.9 | Sobrepeso\n >=30 | Obesidad\n");
	
	
	if(imc < 18.5){
		printf("\nUsted esta: Bajo de peso");}
	else if(imc >= 18.5 && imc <= 24.9){
		printf("\nUsted esta: Normal");}
	else if(imc >= 25.0 && imc <= 29.9){
		printf("\nUsted tiene: Sobrepeso");}
	else if(imc >= 30){
		printf("\nUsted tiene: Obesidad");}
	return 0;
}

