#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/* Fa�a um programa que receba dois n�meros X e Y, sendo X < Y. Calcule e mostre:
		� a soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros
		digitados;
		� a multiplica��o dos n�meros �mpares desse intervalo, incluindo os digitados;*/
		
		int x, y, i, somaPar = 0, multImpar = 1;
		
		inicio:
		printf("Digite o valor de X: ");
		scanf("%d", &x);
		
		printf("\nDigite o valor de Y: ");
		scanf("%d", &y);
	
		if(x < y)
		{
			for(i = x; i <= y; i++)
			{
				if(i % 2 == 0)
				{
					somaPar += i;
				}
				else
				{
					multImpar *= i;
				}
			}
			
		}
		else
		{
			printf("\nX tem que ser menor que Y!\n");
			goto inicio;
		}
		
			printf("Soma dos numeros pares no intervalo [%d, %d]: %d\n", x, y, somaPar);
    		printf("Multiplicacao dos numeros impares no intervalo [%d, %d]: %d\n", x, y, multImpar);
	
	return 0;
}
