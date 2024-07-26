#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Desenvolver um algoritmo para calcular a conta de água para a SANEAGO. 
	O custo da água varia dependendo se o consumidor é residencial, comercial 
	ou industrial. A regra para calcular a conta é:

		– Residencial: R$5,00 de taxa mais R$0,05 por m³ gastos;
		– Comercial: R$500,00 para os primeiros 80 m³ gastos mais R$0,25 por m³ gastos;
		– Industrial: R$800,00 para os primeiros 100 m³ gastos mais R$0,04 por m³ gastos;
		O programa deverá ler a conta do cliente, consumo de água por metros cúbicos e o tipo 
		de consumidor ( residencial, comercial e industrial ). Como resultado, imprima a conta 
		do cliente e o valor real a ser pago pelo mesmo.*/
		
		int op;
		double consumo, conta;
		
		printf("Que tipo de consumidor voce e? 1, 2 ou 3");
		printf("\n1- Residencial \n2- Comercial \n3- Industrial\n");
		printf("Opcao: ");
		scanf("%d", &op);
		
		printf("\nInforme seu consumo por metros cubicos: ");
		scanf("%lf", &consumo);
		
		switch(op){
			case 1:
				conta = 5.00 + (0.05 * consumo);
				printf("\nConta: R$%lf \nConsumo: %lfm3 \nConsumidor Residencial \n", conta, consumo);
				break;
				
			case 2:
				if(consumo <= 80)
				{
					conta = 500.00;
					printf("\nConta: R$%lf \nConsumo: %lfm3 \nConsumidor Comercial \n", conta, consumo);
				}
				else
				{
					conta = 500.00 + ((consumo - 80) * 0.25);
					printf("\nConta: R$%lf \nConsumo: %lfm3 \nConsumidor Comercial \n", conta, consumo);
				}
				break;
				
			case 3:
				if(consumo <= 100)
				{
					conta = 800.00;
					printf("\nConta: R$%lf \nConsumo: %lfm3 \nConsumidor Comercial \n", conta, consumo);
				}
				else
				{
					conta = 800.00 + ((consumo - 80) * 0.04);
					printf("\nConta: R$%lf \nConsumo: %lfm3 \nConsumidor Comercial \n", conta, consumo);
				}
				break;
		}
	
	return 0;
}
