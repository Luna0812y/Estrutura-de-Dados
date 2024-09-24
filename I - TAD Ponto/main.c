//Programa
// gcc -o sysponto main.c ponto.c
#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main(){
    Ponto *ponto = (Ponto*)malloc(sizeof (Ponto));
    
    char menu[] = "\n>>> Bem-vindo(a) <<<\n\
    1 - Inserir \n\
    2 - Mostrar  \n\
    3 - Calcular  \n\
    4 - Liberar  \n\
    0 - Sair    \n\
    >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while(opcao != 0){
        if (opcao == 1){
            //inserir
            criar(ponto);

        } else if(opcao == 2){
            //mostrar
            acessar(ponto);
            
        } else if(opcao == 3){
            //calcular
            calcular(ponto);
            
        } else if(opcao == 4){
            //liberar
            free(ponto);
            // liberar(ponto);
        
        } else {
            printf("Opcao Invalida");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }

    return 0;
}