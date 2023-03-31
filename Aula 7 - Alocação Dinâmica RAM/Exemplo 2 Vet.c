#include <stdio.h>
#include <stdlib.h>

int main() {

    char *x;
    
    x = calloc(2,sizeof(char));    
    
    if(x){
        printf("Alocada com sucesso\n");
        printf("Valor de x: %c \n", *x);
        *x = 'C';
        printf("Valor de x: %c \n", *x);
        printf("Endereço de x: %p", x);
    }else{
        printf("Erro ao alocar\n");
    }


    return 0;
}