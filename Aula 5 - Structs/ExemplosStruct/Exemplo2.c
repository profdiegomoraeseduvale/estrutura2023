#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

int idade;
char situacao;
char nome[100];
 

}Pessoa;




int main(){

    Pessoa pessoa;
    

    printf("Digite o nome: \n");
    fgets(pessoa.nome, 100, stdin);

    printf("Digite a idade: \n");
    scanf("%d", &pessoa.idade);

   getchar();

    printf("Digite a situação: \n");
    scanf("%c", &pessoa.situacao);

    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    printf("\nSituação: %c", pessoa.situacao);
    


    return 0;
}