// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

//INSERÇÃO NA FILA
void inserirValor(No **fila, int valor){
    No *auxiliar, *novo = malloc(sizeof(No));
    if(novo){
        novo->valor = valor;
        novo->proximo = NULL;
        if(*fila==NULL){
            *fila = novo;
        }
        else{
            auxiliar = *fila;
            while(auxiliar->proximo){
                auxiliar = auxiliar->proximo;
            }
            auxiliar->proximo = novo;
        }
    }else 
     printf("\nErro ao alocar memória");
}

//REMOÇÃO DA FILA
No* removerValor(No **fila){
    No *remover = NULL;
    if(*fila){
        remover = *fila;
        *fila = remover->proximo;
    }else{
        printf("Fila Vazia");
    }
    return remover;
}

//IMPRIMIR FILA
void imprimirFila(No *fila){
    printf("\n---Inicio da Fila---\n");
      while(fila){
          printf("%d  ", fila->valor);
          fila = fila->proximo;
      }
    printf("\n---Fim da Fila---\n");
}



int main() {
    
    No *rmv, *fila = NULL;
    
    int opt, valor;
   
    do{
        
        printf("\n0-Sair\n1-Inserir\n2-Remover\n3-Imprimir\n");
        scanf("%d", &opt);
        
        switch(opt){
            case 1:
              printf("Digite um valor:\n");
              scanf("%d", &valor);
              inserirValor(&fila,valor);
              break;
              
            case 2:
              rmv = removerValor(&fila);
              if(rmv){
                  printf("Removido: %d", rmv->valor);
                  free(rmv);
              }
              break;
              
            case 3:
             imprimirFila(fila);
             break;
             
             default: if(opt!=0){
                 printf("Opção Inválida");
             }
        }
        
    }while(opt!=0);
    return 0;
}