typedef struct lista{
    int valor;
    struct lista *prox;
} Lista;

Lista *novo = NULL;
Lista *inicio = NULL;
Lista *atual;

void mostrar();
int procurar(Lista *lista, int dado);
void inserir(Lista *novo, int numero);
void remover_final(Lista *lista, int rem);