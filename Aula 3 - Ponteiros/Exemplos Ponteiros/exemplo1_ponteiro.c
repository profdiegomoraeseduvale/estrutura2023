#include <stdio.h>
#include <conio.h>


int main()
{
	
    int x = 27; //Declaração de variável do tipo inteiro
	int *pX; //Declaração do ponteiro do tipo inteiro

	pX = &x; //Atribui o valor de endereço da variável valor

	printf("%i\n", x); //Imprime o valor
	printf("%p\n",&x); //Imprime o endereço de x na memória
	printf("%p\n",pX); //Imprime o endereço de x na memória


	return 0;
}