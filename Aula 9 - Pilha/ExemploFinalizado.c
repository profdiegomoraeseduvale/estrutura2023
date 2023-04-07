// Online C compiler to run C program online
#include <stdio.h>

// definição do tipo Pessoa

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

// função para criar uma Pessoa
Pessoa ler_pessoa(){
    Pessoa p;
    printf("\nDigite nome e data de nascimento dd mm aaaa:\n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

// procedimento para imprimir as informações de uma Pessoa
void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

// estrutura nó que irá compor nossa pilha

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

// função para a operaçao push (empilhar)

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }
    else
        printf("\nErro ao alocar memoria...\n");
    return NULL;
}

// função para a operação pop (desempilhar)
No* desempilhar(No **topo){
    if(*topo!=NULL){
      No *remover = *topo;
      *topo = remover->proximo;
      return remover;
    }else
   
    return NULL;
}

// função para imprimir a pilha
void imprimirPilha(No *topo){
    printf("\n----------TOPO DA PILHA----------\n");
     while(topo){
         imprimir_pessoa(topo->p);
         topo = topo->proximo;
     }
    printf("\n----------INICIO DA PILHA----------\n");
}

int main() {
    
    No  *remover, *topo = NULL;
    int opt;
    
    do{
        
     printf("\n0 - Sair\n1 - Push\n2 - Pop\n3 - Imprimir");
     scanf("%d", &opt);
     getchar();
     
     switch(opt){
         case 1: 
          topo = empilhar(topo);
         break;
         
         case 2:
          remover = desempilhar(&topo);
          if(remover){
           printf("Elemento removido com sucesso");
           imprimir_pessoa(remover->p);
          }
          else
          printf("Não há elementos a remover");
         break;
         
         case 3:
         imprimirPilha(topo);
         break;
         
         default: 
          if(opt!=0){
              printf("Opção inválida");
          }
     }
     
    }while(opt!=0);
    return 0;
}