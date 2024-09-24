// Implementação
#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

void criar(Ponto *ponto){
    printf("Preencha \n");
    printf("-- Ponto X \n>> ");
    scanf("%d", &ponto->X);
    printf("-- Ponto Y \n>> ");
    scanf("%d", &ponto->Y);
}

void acessar(Ponto *ponto){ 
   printf("X = %d\n", ponto->X);
   printf("Y = %d\n", ponto->Y);
}

void calcular(Ponto *ponto){

    char menu[] = "\n>>> Bem-vindo(a) <<< \n\
    1 - Adição \n\
    2 - Subtração  \n\
    3 - Multiplicação \n\
    0 - Sair   \n\
    >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while(opcao != 0){
        if (opcao == 1){
            //Soma
            printf("Soma: \n");
            printf("%d", ponto->X + ponto->Y);

        } else if(opcao == 2){
            //Subtrai
            printf("Subtração: \n");
            printf("%d", ponto->X - ponto->Y);
            
        } else if(opcao == 3){
            //Multiplica
            printf("Soma: \n");
            printf("%d", ponto->X * ponto->Y);
            
        } else {
            printf("Opcao Invalida");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }

}