#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    Pilha *minha_pilha = cria();

    char menu[] = "\n>>> EmPILHAndo JUNTOS <<<\n\
    1 - Inserir \n\
    2 - Remover \n\
    3 - Mostrar Pilha \n\
    4 - Verificar Quantidade \n\
    0 - Sair    \n\
    >>> ";
    
    int opcao = -1; 
    while (opcao != 0) {
        printf("%s", menu);
        scanf("%d", &opcao);

        if (opcao == 1) {
            float v;
            printf("Digite um valor para inserir no inicio da pilha (ex: 10.5): ");
            if (scanf("%f", &v) != 1) {
                printf("Entrada inválida. Tente novamente.\n");
                while (getchar() != '\n'); 
                continue; 
            }
            push(minha_pilha, v);

        } else if (opcao == 2) {
            if (!vazia(minha_pilha)) {
                float v = pop(minha_pilha);
                printf("Valor %f removido com sucesso.\n", v);
            } else {
                printf("Pilha vazia, não é possível remover.\n");
            }

        } else if (opcao == 3) {
            imprime_lista(minha_pilha);

        } else if (opcao == 4) {
            printf("Quantidade de elementos na pilha: %d\n", amount(minha_pilha));

        } else if (opcao != 0) {
            printf("Opção Inválida\n");
        }
    }

    libera(minha_pilha);

    return 0;
}
