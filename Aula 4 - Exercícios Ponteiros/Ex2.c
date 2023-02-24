#include <stdio.h>

int main()
{
    
    int x, *ptr=NULL;

    printf("Digite um valor para X: \n");
    scanf("%d", &x);

    printf("\nO valor digitado de X é: %d", x);

    ptr = &x;

    *ptr = 40;

    printf("\nO valor final apontado por ptr é: %d", *ptr);
    printf("\nO endereço apontado por ptr é: %p", ptr);

    return 0;
}