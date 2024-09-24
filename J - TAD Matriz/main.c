#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
    int m = 2;
    int n = 2;
    Matriz_Uni *matriz_u = cria_uni(m, n);
    Matriz *matriz = cria_bid(m, n);

    char menu[] = "\n>>> Criando Matrizes <<<\n\
    1 - Matriz Unidimencional \n\
    2 - Matriz Bidimensional  \n\
    0 - Sair    \n\
    >>> ";
    
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while (opcao != 0) {
        if (opcao == 1) {
            Matriz_unidimencional(matriz_u, m, n);
        } else if (opcao == 2) {
            Matriz_Bidimencional(matriz, m, n);
        } else {
            printf("Opcao Invalida\n");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }

    libera_uni(matriz_u);
    libera_bid(matriz);
    
    return 0;
}

void Matriz_unidimencional(Matriz_Uni *matriz_u, int m, int n) {
    char menu_uni[] = "\n>>> Matriz Unidimencional <<<\n\
    1 - Mostrar Completa  \n\
    2 - Acessar (L/C) \n\
    3 - Atribuir (L/C) \n\
    4 - Acessar Linha \n\
    5 - Acessar Coluna \n\
    0 - Sair    \n\
    >>> ";
    
    int opcao_uni;
    printf("%s", menu_uni);
    scanf("%d", &opcao_uni);

    while (opcao_uni != 0) {
        if (opcao_uni == 1) {
            imprime_matriz_unidimensional(matriz_u);
        } else if (opcao_uni == 2) {
            int i, j;
            printf("Digite o numero de linha e uma coluna(L-%d X C-%d): ", m, n);
            scanf("%d %d", &i, &j);
            float value = acessa_uni(matriz_u, i, j);
            printf("Valor: %.2f\n", value);
        } else if (opcao_uni == 3) {
            int i, j;
            float v;
            printf("Digite o numero de linha e uma coluna(L-%d X C-%d): ", m, n);
            scanf("%d %d", &i, &j);
            printf("Digite um valor: ");
            scanf("%f", &v);
            atribui_uni(matriz_u, i, j, v);
            imprime_matriz_unidimensional(matriz_u);
        } else if (opcao_uni == 4) {
            printf("Linhas: %d\n", linhas_uni(matriz_u));
        } else if (opcao_uni == 5) {
            printf("Colunas: %d\n", colunas_uni(matriz_u));
        } else {
            printf("Opcao Invalida\n");
        }
        printf("%s", menu_uni);
        scanf("%d", &opcao_uni);
    }
}

void Matriz_Bidimencional(Matriz *matriz, int m, int n) {
    char menu_bid[] = "\n>>> Matriz Bidimencional <<<\n\
    1 - Mostrar Completa  \n\
    2 - Acessar (L/C) \n\
    3 - Atribuir (L/C) \n\
    4 - Acessar Linha \n\
    5 - Acessar Coluna \n\
    0 - Sair    \n\
    >>> ";
    
    int opcao_bid;
    printf("%s", menu_bid);
    scanf("%d", &opcao_bid);

    while (opcao_bid != 0) {
        if (opcao_bid == 1) {
            imprime_matriz_bidimensional(matriz);
        } else if (opcao_bid == 2) {
            int i, j;
            printf("Digite o numero de linha e uma coluna(L-%d X C-%d): ", m, n);
            scanf("%d %d", &i, &j);
            float value = acessa_bid(matriz, i, j);
            printf("Valor: %.2f\n", value);
        } else if (opcao_bid == 3) {
            int i, j;
            float v;
            printf("Digite o numero de linha e uma coluna(L-%d X C-%d): ", m, n);
            scanf("%d %d", &i, &j);
            printf("Digite um valor: ");
            scanf("%f", &v);
            atribui_bid(matriz, i, j, v);
            imprime_matriz_bidimensional(matriz);
        } else if (opcao_bid == 4) {
            printf("Linhas: %d\n", linhas_bid(matriz));
        } else if (opcao_bid == 5) {
            printf("Colunas: %d\n", colunas_bid(matriz));
        } else {
            printf("Opcao Invalida\n");
        }
        printf("%s", menu_bid);
        scanf("%d", &opcao_bid);
    }
}
