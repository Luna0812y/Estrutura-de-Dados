#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* cria(void) {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->prim = NULL;
    p->n = 0; 
    return p;
}

int show(Pilha* p) {
    if (vazia(p)) {
        printf("Pilha vazia!\n");
        return 0;
    } 
    No* q = p->prim;
    while (q != NULL) {
        printf("%.2f\n", q->info);
        q = q->prox;
    }
    return 1; 
}

No* ins_ini(No* l, float v) {
    No* p = (No*) malloc(sizeof(No));
    p->info = v;
    p->prox = l;
    return p;
}

float pop(Pilha* p) {
    if (vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1); 
    }
    float v = p->prim->info;
    p->prim = ret_ini(p->prim);
    p->n--; 
    return v;
}

No* ret_ini(No* l) {
    No* p = l->prox;
    free(l);
    return p;
}

void push(Pilha* p, float v) {
    p->prim = ins_ini(p->prim, v);
    p->n++; 
}

int vazia(Pilha* p) {
    return (p->prim == NULL);
}

void libera(Pilha* p) {
    No* q = p->prim;
    while (q != NULL) {
        No* t = q->prox;
        free(q);
        q = t;
    }
    free(p);
}

void imprime_lista(Pilha* p) {
    No* q;
    for (q = p->prim; q != NULL; q = q->prox)
        printf("%.2f\n", q->info);
}

int amount(Pilha* p) {
    return p->n; 
}
