#include <stdio.h>
#include <stdlib.h>

int main(){

    int **mat, i, j, linha, coluna;

    // aloca um vetor de ponteiros para inteiros
    printf("Digite o número de linhas: ");
    scanf("%d", &linha);
    printf("\nDigite o número de colunas: ");
    scanf("%d", &coluna);
    
    
    mat = malloc(linha * sizeof(int*));


    // cada posição do vetor aponta para outro vetor
    for(i = 0; i < linha; i++)
        mat[i] = malloc(coluna * sizeof(int));

    srand(time(NULL));


    // gera números aleatórios para preencher a matriz
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++)
            mat[i][j] = rand() % 100;
    }


    // imprime a matriz
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++)
            printf("%2d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}