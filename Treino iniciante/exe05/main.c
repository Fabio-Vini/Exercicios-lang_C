#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*Desenvolver um algoritmo que leia os coeficientes (a , b e c) 
	de uma equa��o do segundo grau e calcule suas ra�zes. O programa 
	deve mostrar, quando poss�vel, o valor das ra�zes calculadas e a 
	classifica��o das ra�zes.*/
	
	double a, b, c, delta, x1, x2;
	
	printf("Digite o valor de a, b e c: \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	delta = pow(b, 2) - 4 * a * c;
	
	printf("Delta: %lf", delta);
	
	if(delta < 0)
	{
		printf("N�o ha raiz quadrada de numero negativo!");
	}
	else
	{
		x1 = (-b + sqrt(delta)) / 2 * (a);
		x2 = (-b - sqrt(delta)) / 2 * (a);
		
		printf("\nx1: %lf \nx2: %lf", x1, x2);
	}
	
	return 0;
}
