#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Desenvolver um algoritmo para ler o n�mero de uma sala de aula,
	 sua capacidade e o total de alunos matriculados na mesma e imprimir
	  uma linha mostrando o n�mero da sala, sua capacidade, o n�mero de 
	  cadeiras ocupadas e sua disponibilidade indicando se a sala est� lotada ou n�o.*/
	  
	  int numSala, capacidade, totalAlunos, ocupadas, disponivel;
	  
	  printf("Informe o numero da sala: ");
	  scanf("%d", &numSala);
	  
	  printf("\nQual a capacidade de alunos: ");
	  scanf("%d", &capacidade);
	  
	  printf("\nQuantos alunos estao matriculados nessa sala: ");
	  scanf("%d", &totalAlunos);
	  
	  disponivel = capacidade - totalAlunos;
	  ocupadas = totalAlunos;
	  
	  //Imprimir os dados informados 
	  printf("\nSala: %d \nCapacidade: %d \nAlunos: %d", numSala, capacidade, totalAlunos);
	  
	  //Verifica��o da sala
	  if(totalAlunos == capacidade)
	  {
	  	printf("\nEsta sala esta lotada!");
	  }
	  else if(totalAlunos > capacidade)
	  {
	  	printf("\nNumero de alunos maior que a capacidade da sala!");
	  }
	  else
	  {
	  	printf("\nCadeiras disponiveis: %d \nCadeiras ocupadas: %d", disponivel, ocupadas);
	  }
	  
	  
	return 0;
}
