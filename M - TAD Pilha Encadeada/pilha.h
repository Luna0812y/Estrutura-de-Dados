#define MAX 10

typedef struct no {
    float info;
    struct no* prox;
} No;

typedef struct {
    No* prim;
    int n;
} Pilha;

int show(Pilha* p); // ver pilha
Pilha* cria(void);
int vazia(Pilha* p); 
float pop(Pilha* p); // retirar 
int amount(Pilha* p); // Quantidade
void libera(Pilha* p);
void imprime_lista(Pilha* p);
No* ret_ini(No* l); // retirar do início
No* ins_ini(No* l, float v); // inserir
void push(Pilha* p, float v); // inserir
