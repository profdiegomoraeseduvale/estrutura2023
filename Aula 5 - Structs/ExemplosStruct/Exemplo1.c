#include <stdio.h>
#include <string.h>

typedef struct{

int idade;
char situacao;
char nome[100];
 

}Pessoa;


struct Pessoa2{

int idade;
char situacao;
char nome[100];

};

int main(){

    Pessoa pessoa;
    struct Pessoa2 pessoa2;

    pessoa.idade = 30;
    pessoa.situacao = 'R';
    strcpy(pessoa.nome, "Diego Moraes");

    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    printf("\nSituação: %c", pessoa.situacao);
    


    return 0;
}