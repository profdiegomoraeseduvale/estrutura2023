#include <stdio.h>
#include <stdlib.h>


int main(){

    int **mat, i, j;

    // alocando um vetor de ponteiros (vetor de vetores)
    mat = malloc(5 * sizeof(int*));

    // alocando um vetor para cada posição do vetor anterior
    for(i = 0; i < 5; i++)
        mat[i] = malloc(5 * sizeof(int));

    srand(time(NULL));

    // gerando números e preenchendo a matriz
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            *(*(mat + i) + j) = rand() % 100;
    }

    // imprimindo a matriz no terminal
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++)
            printf("%2d ", *(*(mat + i) + j));
        printf("\n");
    }

    // liberando a memória alocada para a matriz
    for(i = 0; i < 5; i++)
        free(mat[i]); // libera cada uma das linhas
    free(mat); // libera o vetor inicial com os ponteiros para as linhas

    return 0;
}