#define MAX_PONTOS 10

typedef struct {
    int num[MAX_PONTOS];
    int count; 
} Ponto;

Ponto* criar_ponto();
void incluir(Ponto *ponto);
void mostrar(Ponto *ponto);
int procurar(Ponto *ponto, int dado);
void remover(Ponto *ponto, int rem);