#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, tam, *vet;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL));

    vet = malloc(tam * sizeof(int));

    if(vet){
        printf("Memoria alocada com sucesso!\n");
        for(i = 0; i < tam; i++)
            *(vet + i) = rand() % 100;

        for(i = 0; i < tam; i++)
            printf("%d ", *(vet + i));
        printf("\n");

        printf("Digite o novo tamanho do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam);

        printf("\nVetor realocado:\n");
        for(i = 0; i < tam; i++)
            printf("%d ", *(vet + i));
        printf("\n");

        free(vet);
    }
    else{
        printf("Erro ao alocar memoria!\n");
    }

    return 0;
}