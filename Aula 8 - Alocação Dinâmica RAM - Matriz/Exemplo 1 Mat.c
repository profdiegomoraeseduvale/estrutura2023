int main(){

    int **mat, i, j;

    // aloca um vetor de ponteiros para inteiros
    mat = malloc(4 * sizeof(int*));


    // cada posição do vetor aponta para outro vetor
    for(i = 0; i < 4; i++)
        mat[i] = malloc(3 * sizeof(int));

    srand(time(NULL));


    // gera números aleatórios para preencher a matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++)
            mat[i][j] = rand() % 100;
    }


    // imprime a matriz
    for(i = 0; i < 4; i++){
        for(j = 0; j < 3; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}