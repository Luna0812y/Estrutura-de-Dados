#define MAX 10

typedef struct {
    int n;
    float vet[MAX];
} Pilha;

Pilha* cria(void);
int show(Pilha* p); // mostra
int pop(Pilha* p); // remover do início
int is_full(Pilha* p); // cheio
int amount(Pilha* p); // Quantidade
void libera(Pilha* p);
int is_empty(Pilha* p); // vazio
void push(Pilha* p, float v); // inserir