#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*) Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada
		uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir
		calcule:
		• o número de pessoas;
		• a idade média do grupo;
		• a menor idade e a maior idade.*/
	
	
	int idade;
    int numeroPessoas = 0;
    int somaIdades = 0;
    int menorIdade = 1000; // Um valor maior que qualquer idade possível
    int maiorIdade = 0;

    while (1) {
        printf("Digite a idade (0 para finalizar): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        numeroPessoas++;
        somaIdades += idade;

        if (idade < menorIdade) {
            menorIdade = idade;
        }

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }
    }

    if (numeroPessoas > 0) {
        double idadeMedia = (double)somaIdades / numeroPessoas;
        printf("\nNúmero de pessoas: %d\n", numeroPessoas);
        printf("Idade media: %.2f\n", idadeMedia);
        printf("Menor idade: %d\n", menorIdade);
        printf("Maior idade: %d\n", maiorIdade);
    } else {
        printf("Nenhuma idade foi informada.\n");
    }
	
	
	
	return 0;
}
