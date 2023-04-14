#include <stdio.h>

typedef struct no{
    char caracter;
    struct no *proximo;
}No;

 No* empilhar(No *pilha, char valor){
     No *novo = malloc(sizeof(No));
     
     if(novo){
         novo->caracter = valor;
         novo->proximo = pilha;
         return novo;
     }
     else
     printf("Erro de alocação");
     return NULL;
 }
 
 No* desempilhar(No **pilha){
     No *remover = NULL;
     
     if(*pilha){
         remover = *pilha;
         *pilha = remover->proximo;
     }
     else
     printf("Pilha Vazia");
     return remover;
 }
 
 void imprimir(No *pilha){
     printf("\nTopo da Pilha\n");
       while(pilha){
           printf("%c", pilha->caracter);
           pilha = pilha->proximo;
       }
     printf("\nBase da Pilha\n");
 }
 
 int par(char f, char a){
     switch(f){
         case ')':
         if(a == '(')
           return 1;
         else
           return 0;
         break;
         
         case ']':
         if(a == '[')
           return 1;
         else
           return 0;
         break;
         
         case '}':
         if(a == '{')
           return 1;
         else
           return 0;
         break;
     }
 }
 
 int valida(char x[]){
     int i = 0;
     No *remover, *pilha = NULL;
     
     while(x[i]!='\0'){
         if(x[i]=='(' || x[i]=='[' || x[i]=='{'){
             pilha = empilhar(pilha, x[i]);
             imprimir(pilha);
         }
         else if(x[i]==')' || x[i]==']' || x[i]=='}'){
             
             remover = desempilhar(&pilha);
             if(par(x[i], remover->caracter)==0){
                 printf("\nExpressão Mal Formada\n");
                 return 1;
             }
             free(remover);
             
         }
         i++;
     }
     
     imprimir(pilha);
     
     if(pilha){
         printf("Expressão Mal Formada");
         return 1;
     }else{
         printf("Expressão Bem Formada");
         return 0; 
     }
     
 }

int main() {
     
    char expressao[50];
    
    printf("Digite uma expressão: ");
    scanf("%49[^\n]", expressao);
    
    printf("\nExpressão: %s \nRetorno: %d",expressao, valida(expressao));

    return 0;
}