#include <stdio.h>

int main()
{
    
   int vet[5];

   for (int i = 0; i < 5; i++)
   {
      printf("Digite o valor da posição %d :", i);
      scanf("%d", &vet[i]);
   }

    printf("\n");

   for (int i = 0; i < 5; i++)
   {
      printf("%d ", vet[i]);
    
   }

    printf("\n");


    int *ptr = vet;

     for (int i = 0; i < 5; i++)
   {
      printf("\nValor: %d / Endereço: %p", *(vet+i), vet+i);
    
   }

   

    return 0;
}