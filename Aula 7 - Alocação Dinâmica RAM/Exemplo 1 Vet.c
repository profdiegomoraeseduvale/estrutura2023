#include <stdio.h>
#include <stdlib.h>

int main() {

    int *x;
    
    x = malloc(sizeof(int));
    
    if(x){
        printf("Alocada com sucesso\n");
        printf("Valor de x: %d \n", *x);
        *x = 50;
        printf("Valor de x: %d \n", *x);
    }else{
        printf("Erro ao alocar\n");
    }


    return 0;
}