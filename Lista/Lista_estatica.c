#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
    int valor;
    struct lista *prox;
} Lista;

Lista *novo = NULL;
Lista *inicio = NULL;
Lista *atual;

void inserir(Lista *novo, int numero){  
    novo = novo->valor;
    novo->valor = numero;
    novo->prox = 0;
}

void mostrar(){
    atual = inicio;
    while (atual != NULL){
        printf("%d", atual->valor);
        atual = atual->prox;
    } 
}

int procurar(Lista *lista, int dado){
    while (lista->prox != NULL){
        for(int i = 0; i < 10; i++){
            if(lista[i].valor == dado){
                return i;
            }
        }

        return -1;
    } 
}

void remover_final(Lista *lista, int rem){
    while (lista->prox != NULL){ 
        lista[rem] = lista[prox == NULL];
    } 
}

int main(){
    Lista *lista = (Lista*)malloc(sizeof (Lista));
    Lista *novo = (Lista*)malloc(sizeof (Lista));

    char menu[] = "\n>>> Bem-vindo(a) <<<\n\
    1 - Inserir \n\
    2 - Mostrar  \n\
    3 - Procurar  \n\
    4 - Remover  \n\
    0 - Sair    \n\
    >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while(opcao != 0){
        if (opcao == 1){
            //inserir
            int numero;
            printf("Digite um número: \n");
            scanf("%d", &numero);
            inserir(novo, numero);

        } else if(opcao == 2){
            //mostrar
            mostrar();
            
        } else if(opcao == 3){
            //procruar na lista
            int dado;
            printf("Digite um número: \n");
            scanf("%d", &dado);
            procurar(lista, dado);
            
        } else if(opcao == 4){
            //remover da lista e mostrar
            int rem;
            printf("Digite um número para remover: \n");
            scanf("%d", rem);
            remover_final(lista, rem);
        
        } else {
            printf("Opcao Invalida");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }

    return 0;
}