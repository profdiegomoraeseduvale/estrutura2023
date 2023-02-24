#include <stdio.h>

int main()
{
    
    char texto[100];

    printf("Digite o texto desejado: \n");
    scanf("%[^\n]s", texto);

    printf("%p\n",texto);
    printf("%p\n",&texto);
    printf("%p\n",&texto[1]);
    

    return 0;
}