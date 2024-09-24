#include <stdio.h>
#include <stdlib.h>
#include <listad.h>

typedef struct {
    int num;
} Valores;

Valores listas[10];


void incluir(){
    for(int i = 0; i < 10; i++){
        printf("Digite o (%d) valor: \n", i + 1);
        scanf("%d", listas[i].num);
    }
}

void mostrar(){
    printf("Lista de valores: \n");
    for(int i = 0; i < 10; i++){
        printf("%d - Valor: \n", i + 1, listas[i].num);
    }
}

int procurar(int dado){
    for(int i = 0; i < 10; i++){
        if(listas[i].num == dado){
            return i;
        }
    }

    return -1;
}

void remover(int rem){
    if(rem >= 0 && rem < 10){
        listas[rem] = listas[9];
    } else {
        printf("Posição inválida");
    }
}

