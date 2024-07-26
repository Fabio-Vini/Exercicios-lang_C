#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Desenvolver um algoritmo para ler um número “x” e 
	calcular e imprimir o valor de “y” de acordo com as condições abaixo:
		y = x , se x < 1;
		y = 0 , se x = 1;
		y = x² , se x > 1;*/
		
		double x, y;
		
		printf("Informe o valor de x: ");
		scanf("%lf", &x);
		
		if(x < 1)
		{
			y = x;
			printf("Y: %lf", y);
		}
		else if(x == 1)
		{
			y = 0;
			printf("Y: %lf", y);
		}
		else if(x > 1)
		{
			y = pow(x, 2);
			printf("Y: %lf", y);
		}
	
	return 0;
}
