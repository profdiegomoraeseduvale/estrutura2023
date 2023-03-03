#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int dia, mes, ano
}Data;

typedef struct{
Data data;
int idade;
char situacao;
char nome[100];
 

}Pessoa;


void imprimirPessoa(Pessoa pessoa){

    printf("\nNome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    printf("\nSituação: %c", pessoa.situacao);
    printf("\nData de nascimento: %d/%d/%d", pessoa.data.dia, pessoa.data.mes, pessoa.data.ano);
    
    printf("\n");
}


Pessoa lerPessoa(){

    Pessoa pessoa;    

    printf("Digite o nome: \n");
    fgets(pessoa.nome, 100, stdin);

    printf("Digite a idade: \n");
    scanf("%d", &pessoa.idade);

    getchar();

    printf("Digite a situação: \n");
    scanf("%c", &pessoa.situacao);

    printf("Digite a data de nascimento (xx/xx/xxxx): \n");
    scanf("%d%d%d", &pessoa.data.dia, &pessoa.data.mes, &pessoa.data.ano);

    return pessoa;

}


int main(){

   
    int i;

    Pessoa pessoas[2];

    for(i=0; i<2; i++){
        pessoas[i] = lerPessoa();
        getchar();
    }

    for(i=0; i<2; i++){
        imprimirPessoa(pessoas[i]);
    }
   
    


    return 0;
}