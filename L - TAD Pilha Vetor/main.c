#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *minha_pilha = cria();

    char menu[] = "\n>>> EmPILHAndo com Vetor <<<\n\
    1 - Inserir \n\
    2 - Remover \n\
    3 - Mostrar \n\
    4 - Verificar Quantidade \n\
    0 - Sair    \n\
    >>> ";
    
    int opcao = -1; 
    while (opcao != 0) {
        printf("%s", menu);
        scanf("%d", &opcao);

        if (opcao == 1) {
            float v;
            printf("Digite um valor para inserir na pilha (ex: 10.5): ");
            if (scanf("%f", &v) != 1) {
                printf("Entrada inválida. Tente novamente.\n");
                while (getchar() != '\n'); 
                continue; 
            }
            push(minha_pilha, v);

        } else if (opcao == 2) {
            printf("Removendo valor do início da pilha:\n");
            pop(minha_pilha); 

        } else if (opcao == 3) {
            show(minha_pilha);

        } else if (opcao == 4) {
            printf("Quantidade de elementos na pilha: %d\n", amount(minha_pilha));

        } else if (opcao != 0) {
            printf("Opção Inválida\n");
        }
    }

    libera(minha_pilha);

    return 0;
}