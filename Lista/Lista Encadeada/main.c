#include <stdio.h>
#include <stdlib.h>
#include <lista.h>

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