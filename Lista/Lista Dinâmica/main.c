#include <stdio.h>
#include <stdlib.h>
#include <listad.h>

int main(){
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
            incluir();

        } else if(opcao == 2){
            //mostrar
            mostrar();
            
        } else if(opcao == 3){
            //procruar na lista
            int dado;
            printf("Digite um número: \n");
            scanf("%d", &dado);
            procurar(dado);
            
        } else if(opcao == 4){
            //remover da lista
            int numero;
            printf("Digite um número para remover: \n");
            scanf("%d", &numero);
            remover(numero);
            mostrar();
        
        } else {
            printf("Opcao Invalida");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }
    
    return 0;
}