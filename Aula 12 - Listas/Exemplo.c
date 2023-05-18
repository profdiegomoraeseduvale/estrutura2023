#include <stdio.h>

//ESTRUTURA DO NÓ
typedef struct no{
    int valor;
    struct no *proximo;
}No;


//INSERIR NO INÍCIO DA LISTA
void inserirInicio(No **lista, int num){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num; // preenche o campo valor
        novo->proximo = *lista; // o próximo do novo nó aponta para o início da lista
        *lista = novo; // o início da lista passa a ser o novo nó
    }
    else
        printf("Erro ao alocar memoria!\n");
}

//INSERIR NO FIM DA LISTA
void inserirFim(No **lista, int num){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        novo->proximo = NULL;

        //A LISTA ESTÁ VAZIA?
        if(*lista == NULL)
            *lista = novo; // primeiro nó da lista
        else{
            aux = *lista;
            while(aux->proximo) // caminha até o último nó da lista
                aux = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("Erro ao alocar memoria!\n");
}

/*
     procedimento para inserir no meio da lista
*/
void inserirMeio(No **lista, int num, int ant){
    No *aux, *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = num;
        // é o primeiro?
        if(*lista == NULL){
            novo->proximo = NULL;
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->valor != ant && aux->proximo)
                aux = aux->proximo;
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    }
    else
        printf("Erro ao alocar memoria!\n");
}

void imprimirLista(No *no){
    printf("\n\tLista: ");
    while(no){
        printf("%d ", no->valor);
        no = no->proximo;
    }
    printf("\n\n");
}

int main() {
    
    int opcao, valor, anterior;
    No *lista = NULL;

    do{
        printf("\n\t0 - Sair\n\t1 - Inicio\n\t2 - Fim\n\t3 - Meio\n\t4 - Imprimir\n");
        scanf("%d", &opcao);

        switch(opcao){
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 2:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserirFim(&lista, valor);
            break;
        case 3:
            printf("Digite um valor e o valor de referencia: ");
            scanf("%d%d", &valor, &anterior);
            inserirMeio(&lista, valor, anterior);
            break;
        case 4:
            imprimirLista(lista);
            break;
        default:
            if(opcao != 0)
                printf("Opcao invalida!\n");
        }

    }while(opcao != 0);

    return 0;
}