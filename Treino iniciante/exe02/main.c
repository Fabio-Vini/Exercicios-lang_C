#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Refaça o código abaixo usando o comando while.
		
		int main() {
		 for ( int i = 1 ; i <= 20 ; i++ ) {
		 if ( i == 2 ) continue;
		 if ( i == 5 ) break;
		 printf("i = %d\n",i);
		 }
		}
	*/
	
	int i = 1;
	
	while(i <= 20)
	{
		if(i == 2)
		{
			i++;
			continue;
		}
		
		if(i ==5)
		{
			break;
		}
	}
	
	printf("i = %d\n", i);
	
	return 0;
}
