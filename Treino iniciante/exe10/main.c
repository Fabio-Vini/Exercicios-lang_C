#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Fazer um algoritmo que dado os lados de um triângulo A, B e C.
	 Dizer se os lados formam um triângulo:
		• Retângulo = (A² = B² + C²);
		• Obtusângulo = (A² > B² + C²);
		• Acutângulo = (A² < B² + C²) ;*/
	
	double a, b, c;
	
	printf("Valor de a: ");
	scanf("%lf", &a);
	
	printf("Valor de b: ");
	scanf("%lf", &b);
	
	printf("Valor de c: ");
	scanf("%lf", &c);	
	
	if(pow(a, 2) == pow(b, 2) + pow(c, 2))
	{
		printf("Triangulo Retangulo!");
	}
	else if(pow(a, 2) > pow(b, 2) + pow(c, 2))
	{
		printf("Triangulo Obtusangulo!");
	}
	else
	{
		printf("Triangulo Acutangulo!");
	}
	return 0;
}
