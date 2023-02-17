#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	 int x, *ptrx, **pptrx;
  
	  //inicializando a variavel com zero
	  x = 0;
	  printf("\nvalor de x = %d\n", x);
	  printf("Endereco de x: %x\n\n",&x);
	  
	  //Atribuindo os enderecos para os ponteiros
	  ptrx = &x; // ptrx aponta para x
	  pptrx = &ptrx; // pptrx aponta para ptrx 
	  
	  //Resultados em Tela 1
	  *ptrx =+ 10;
	  printf("\nvalor de x = %d", x);
	  printf("\nEndereco apontado por ptrx: %x\n",ptrx);
	  printf("Valor da variavel X que esta sendo apontada por ptrx: %d\n",*ptrx);
	  printf("Endereco de memoria da variavel ptrx %x\n",&ptrx);
	  
	  //Resultados em Tela 2
	  printf("\n\nvalor de x = %d", x);
	  printf("\nEndereco apontado por **pptrx: %x",pptrx);
	  printf("\nValor da variavel para a qual pptrx faz referencia: %d",**pptrx);
	  printf("\nEndereco de memoria da variavel **pptrx %x\n\n",&pptrx); 
	
	return 0;
}