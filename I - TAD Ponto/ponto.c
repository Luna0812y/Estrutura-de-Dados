#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"

Ponto* criar_ponto(){
    Ponto *ponto = (Ponto *)malloc(sizeof(Ponto)); 
    if(ponto){
        ponto->count = 0;
    }
    return ponto; 
}

void incluir(Ponto *ponto){
    if(ponto->count >= MAX_PONTOS){
        printf("Limite de pontos alcancado.\n");
        return;
    }
    
    for(int i = ponto->count; i < MAX_PONTOS; i++){
        printf("Digite o (%d) valor: \n", i + 1);
        scanf("%d", &ponto->num[i]);
        ponto->count++;
        
        if(ponto->count >= MAX_PONTOS){
            break;
        }
    }
}


void mostrar(Ponto *ponto){
    printf("Lista de valores: \n");
    for(int i = 0; i < ponto->count; i++){
        printf("%d - Valor: %d\n", i + 1, ponto->num[i]);
    }
}


int procurar(Ponto *ponto, int dado){
    for(int i = 0; i < ponto->count; i++){
        if(ponto->num[i] == dado){
            return i;
        }
    }
    return -1;
}

void remover(Ponto *ponto, int rem){
    if(rem >= 0 && rem < ponto->count){
        for(int i = rem; i < ponto->count - 1; i++){
            ponto->num[i] = ponto->num[i + 1]; 
        }
        ponto->count--; 
    }else{
        printf("Posicao invalida\n");
    }
}