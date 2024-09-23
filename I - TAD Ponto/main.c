#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

int main() {
    Ponto *ponto = criar_ponto(); 

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

    while (opcao != 0) {
        if (opcao == 1) {
            incluir(ponto);
        } else if (opcao == 2) {
            mostrar(ponto);
        } else if (opcao == 3) {
            int dado;
            printf("Digite um numero: \n");
            scanf("%d", &dado);
            int pos = procurar(ponto, dado);
            if (pos != -1) {
                printf("Numero encontrado na posicao: %d\n", pos + 1);
            } else {
                printf("Numero não encontrado.\n");
            }
        } else if (opcao == 4) {
            int numero;
            printf("Digite a posicao para remover (1 a %d): \n", ponto->count);
            scanf("%d", &numero);
            remover(ponto, numero - 1); 
            mostrar(ponto);
        } else {
            printf("Opcao Invalida\n");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }
    
    return 0;
}