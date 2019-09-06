#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

/**
*\brief Recibe los sumandos y realiza la suma
*\param Sumandos
*\return Resultado de la suma
*/
float sumar (float x, float y)
		{
		float resultado;
		resultado = x + y;
		return resultado;
		}
/**
*\brief Recibe minuendo y sustraendo y calcula la diferencia
*\param Minuendo y sustraendo (A y B)
*\return Resultado de la resta
*/
float restar (float x, float y)
		{
		float resultado;
		resultado = x - y;
		return resultado;
		}
/**
*\brief Recibe dividendo y divisor y realiza el cociente
*\param Dividendo y divisor
*\return Resultado del cociente
*/

float cociente (float x, float y)
		{
		float resultado;
		resultado = x / y;
		return resultado;
		}
/**
*\brief Recibe los factores y realiza el producto
*\param factores
*\return Resultado de la multiplicación
*/
float producto (float x, float y)
		{
		float resultado;
		resultado = x * y;
		return resultado;
		}
/**
*\brief Recibe el número A y calcula el factorial
*\param A
*\return Resultado del factorial
*/
	int factorialA (int x)
		{
		int resultado;
		if(x==1)
		return 1;
		resultado = x * factorialA(x-1);
		return (resultado);
		}
/**
*\brief Recibe el número B y calcula el factorial
*\param B
*\return Resultado del factorial
*/
		int factorialB (int y)
		{
		int resultado;
		if(y==1)
		return 1;
		resultado = y * factorialB(y-1);
		return (resultado);
		}
