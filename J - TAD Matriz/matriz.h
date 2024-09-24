//Matriz UNI
typedef struct Matriz_Uni{
    int lin; 
    int col; 
    float* v; 
} Matriz_Uni;

Matriz_Uni* cria_uni(int m, int n);

int linhas_uni(Matriz_Uni* mat);
void libera_uni(Matriz_Uni* mat);
int colunas_uni(Matriz_Uni* mat);
float acessa_uni(Matriz_Uni* mat, int i, int j);
void imprime_matriz_unidimensional(Matriz_Uni *matriz);
void atribui_uni(Matriz_Uni* mat, int i, int j, float v);

//Matriz BID
typedef struct Matriz{
   int lin;
   int col;
   float **v;
} Matriz;

Matriz* cria_bid(int m, int n);

int linhas_bid(Matriz* mat);
void libera_bid(Matriz* mat);
int colunas_bid(Matriz* mat);
float acessa_bid(Matriz* mat, int i, int j);
void imprime_matriz_bidimensional(Matriz *matriz);
void atribui_bid(Matriz* mat, int i, int j, float v);

// Menu
void Matriz_unidimencional(Matriz_Uni *matriz_u, int m, int n);
void Matriz_Bidimencional(Matriz *matriz, int m, int n);