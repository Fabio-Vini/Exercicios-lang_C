#include <stdio.h>
#include <stdlib.h>

#ifndef M_PI
  #define M_PI 3.141592653589793238462643383279502984
#endif

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*IMPORTANTE: Para que o codigo funcione copie as linhas 4, 5, e 6*/
	
	/*. Fazer um programa em "C" que solicite 2 n�meros e informe:
		 a) A soma dos n�meros;
		 b) O produto do primeiro n�mero pelo quadrado do segundo;
		 c) O quadrado do primeiro n�mero;
		 d) A raiz quadrada da soma dos quadrados;
		 e) O seno da diferen�a do primeiro n�mero pelo segundo;
		 f) O m�dulo do primeiro n�mero.*/
	
	float a, b, itemA, itemB, itemC, itemD, itemE, itemF;
		
		printf("Digite o primeiro valor: ");
		scanf("%f", &a);
		
		printf("Digite o segundo valor: ");
		scanf("%f", &b);	
		
		itemA = a + b;
		
		itemB = a * (pow(b, 2));
		
		itemC = pow(a, 2);
		
		itemD = sqrt(pow(a, 2) + pow(b, 2));
		
		itemE = sin((a - b)*M_PI/180);
		
		itemF = abs(a);
		
		printf("Respostas\n");
		printf("A: %f\nB: %f\nC: %f\nD: %f\nE: %f\nF: %f\n", itemA, itemB, itemC, itemD, itemE, itemF);

		
	return 0;
}
