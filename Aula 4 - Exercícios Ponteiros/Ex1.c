#include <stdio.h>

int main()
{
    
    int x, *prt;

    printf("Digite um valor para X: \n");
    scanf("%d", &x);

    ptr = &x;

    printf("\nO valor apontado por ptr é: %d", *ptr);
    printf("\nO endereço apontado por ptr é: %p", ptr);

    return 0;
}