#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* cria(void) {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;   
    return p;
}

void push(Pilha* p, float v) {
    if (is_full(p)) {
        printf("Capacidade da pilha estourou.\n");
        return; 
    }
    p->vet[p->n] = v;
    p->n++;
}

int pop(Pilha* p) {
    if (is_empty(p)) {
        printf("Pilha vazia.\n");
        return -1;
    }
    
    float v = p->vet[0]; 

    for (int i = 0; i < p->n - 1; i++) {
        p->vet[i] = p->vet[i + 1];
    }
    p->n--;
    printf("Valor %f removido com sucesso.\n", v);
    return 1; 
}

int show(Pilha* p) {
    if (is_empty(p)) {
        printf("Pilha vazia!\n");
        return 0;
    } 
    for(int i = 0; i < p->n; i++) {
        printf("%.2f\n", p->vet[i]);
    }
    return 1; 
}

int amount(Pilha* p) {
    return p->n; 
}

int is_full(Pilha* p) {
    return p->n == MAX;
}

int is_empty(Pilha* p) {
    return p->n == 0;
}

void libera(Pilha* p) {
    free(p);
}