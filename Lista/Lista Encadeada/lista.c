#include <stdio.h>
#include <stdlib.h>
#include <lista.h>

void inserir(Lista *novo, int numero){  
    novo = novo->valor;
    novo->valor = numero;
    novo->prox = 0;
}

void mostrar(){
    atual = inicio;
    while (atual != NULL){
        printf("%d", atual->valor);
        atual = atual->prox;
    } 
}

int procurar(Lista *lista, int dado){
    while (lista->prox != NULL){
        for(int i = 0; i < 10; i++){
            if(lista[i].valor == dado){
                return i;
            }
        }

        return -1;
    } 
}

void remover_final(Lista *lista, int rem){
    while (lista->prox != NULL){ 
        lista[rem] = lista[prox == NULL];
    } 
}