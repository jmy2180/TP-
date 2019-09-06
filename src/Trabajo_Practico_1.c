#include <stdio.h>
#include <stdlib.h>
#include "tp1.h"

int main() {
	float a;
	float b;
	float resultadoSuma;
	float resultadoResta;
	float resultadoCociente;
	float resultadoProducto;
	int resultadoFactorialA;
	int resultadoFactorialB;
	int aEntero;
	int bEntero;

	printf("Trabajo práctico No 1 - Programacion 1 / Laboratorio 1\n");
	printf("Ingrese el primer número: \n");
	scanf("%f", &a);
	printf("Ingrese el segundo numero: \n");
	scanf("%f", &b);
	printf("El primer número es: %f \n", a);
	printf("El segundo número es: %f \n", b);

	resultadoSuma = sumar(a, b); // Calculo la suma
	resultadoResta = restar(a,b); //Calculo la resta
	resultadoProducto = producto (a,b); //Calculo el producto

	printf("El resultado a A+B es: %f\n", resultadoSuma);
	printf("El resultado de A-B es: %f\n", resultadoResta);
	printf("El resultado de AxB es: %f\n", resultadoProducto);


	if (b!=0) //Calculo el cociente
		{
		resultadoCociente = cociente (a,b);
		printf("El resultado de A/B es: %f\n", resultadoCociente);
		}else {
			printf ("El numero B es igual a cero. No es posible efectual el cociente\n");
			}

	if (a>0) //Calculo el factorial de A. Por convencion, !0 = 1
	{
		aEntero = (int) a;
		if (a-aEntero == 0)
		{
			resultadoFactorialA = factorialA (a);
			printf ("EL factorial de A es: %d\n", resultadoFactorialA);
			}else {
				printf ("El numero A es decimal. No se puede calcular el factorial\n");
			}
		}else if (a==0){
			printf ("El factorial de A es : 1\n");
			}else {
				printf ("El numero A es negativo. No es posible calcular el factorial\n");
			}

	if (b>0) //Calculo el factorial de A. Por convencion, !0 = 1
	{
		bEntero = (int) b;
		if (b-bEntero ==0)
			{
			resultadoFactorialB = factorialB (b);
			printf("El factorial de B es: %d", resultadoFactorialB);
			}else {
				printf ("El numero B es decimal. No se puede calcular el factorial\n");
			}
		}else if (b==0){
			printf("El factorial de B es: 1\n");
			}else{
			printf ("El numero B es negativo. No es posible calcular el factorial");
			}
	return 0;
}




