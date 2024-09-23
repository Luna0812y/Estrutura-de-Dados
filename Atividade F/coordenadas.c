#include <time.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct ponto {
 int x;
 int y;
} Ponto; 

typedef struct circulo {
 Ponto p;
 int raio;
} Circulo;


Circulo* criar_ponto(int x, int y, int raio) {
    Circulo *circulo = (Circulo *)malloc(sizeof(Circulo)); 
    if (circulo != NULL) { 
        circulo->p.x = x; 
        circulo->p.y = y; 
        circulo->raio = raio; 
    }
    return circulo; 
}

void mostrar_circulo(Circulo *c){
    //printf("Valores do circulo: \n");
    printf("x = %d, y = %d e raio: %d", c->p.x, c->p.y, c->raio);
}

void atribuiAleatorio(Circulo *c){
    c->p.x = rand() % 100; 
    c->p.y = rand() % 100; 
    c->raio = rand() % 100;  
}

void atribuiAleatorioVetor(Circulo *vet, int n) {
    srand(time(NULL)); 
    for (int i = 0; i < n; i++) {
        vet[i].p.x = rand() % 100; 
        vet[i].p.y = rand() % 100; 
        vet[i].raio = rand() % 100;
    }
}

void mostraCirculoVetor(Circulo *vet, int n) {
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf(">> %d - Circulo --> ", i + 1);
        mostrar_circulo(&vet[i]); 
        printf("\n");
    }
}


int main(){
    srand(time(NULL)); 

    printf(">>> Definindo Cordenadas <<<\n");
    Circulo *c1 = (Circulo *)malloc(sizeof(Circulo));
    //c1
    printf(">>> 1. Circulo\n");
    printf("Digite os valores de x e y: ");
    scanf(" %d %d", &c1->p.x, &c1->p.y);

    printf("Digite o valor do raio: ");
    scanf("%d", &c1->raio);
    
    mostrar_circulo(c1);

    Circulo *c2 = (Circulo *)malloc(sizeof(Circulo));
    //c2
    printf("\n\n");
    printf(">>> 2. Circulo\n");
    printf("Digite os valores de x e y: ");
    scanf(" %d %d", &c2->p.x, &c2->p.y);

    printf("Digite o valor do raio: ");
    scanf(" %d", &c2->raio);

    mostrar_circulo(c2);

    //atribuir novos valores a c1 e c2
    printf("\n\n");
    printf(">>> Atribuindo novos valores <<<\n");
    atribuiAleatorio(c1);
    atribuiAleatorio(c2);

    printf(">>> 1. Circulo\n");    
    mostrar_circulo(c1);
    printf(">>> 2. Circulo\n");    
    mostrar_circulo(c2);

    printf("\n\n");
    printf(">>> Definindo um novo circulo <<<\n");
    Circulo *c3 = c1;
    
    c3->p.x = 30;
    c3->p.y = 40;
    c3->raio = 15;

    printf(">>> 1. Circulo\n");    
    mostrar_circulo(c1);
    printf(">>> 3. Circulo\n");
    mostrar_circulo(c3);

    printf("\n\n");
    printf(">>> Definindo vetor <<<\n");    
    Circulo vet[10];

    atribuiAleatorioVetor(vet, 10);
    mostraCirculoVetor(vet, 10);

    return 0;
}

