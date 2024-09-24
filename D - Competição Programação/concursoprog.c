#include <stdio.h>
#include <stdlib.h> 

void preencher(int n, int *vetor);
int mostrarVetor(int n, int *vetor);
void NotasTeste(int n, int *insc, int *t1, int p1, int *t2,  int p2, int *vetorT1);
void CalcularMedia(int n, int *inscritos, int *t1, int p1, int *t2,  int p2, int *vetorT1);

int main() {
    int n; //quantidade de inscritos
    int *inscr; //aramzenar inscrições
    int *t1; //nota do primeiro teste
    int p1; //peso teste 1 - media ponderada
    int *t2; //nota do segundo teste
    int p2; //peso teste 2 - media ponderada
    int *tam; // tamanho de campeos

    printf("Digite a quantidade de participantes \n>> ");
    scanf("%d", &n);
 
    //alocação de arrays
    inscr = (int *)malloc(n * sizeof(int));
    t1 = (int *)malloc(n * sizeof(int));
    t2 = (int *)malloc(n * sizeof(int));
    tam = (int *)malloc(n * sizeof(int));

    preencher(n, inscr);

    printf("Inscritos >> \n");
    mostrarVetor(n, inscr);

    printf("Digite o peso do primeiro teste \n>> ");
    scanf("%d", &p1);

    printf("Digite o peso do segundo teste \n>> ");
    scanf("%d", &p2);

    NotasTeste(n, inscr, t1, p1, t2, p2, tam);

    CalcularMedia(n, inscr, t1, p1, t2, p2, tam);

    printf("Maiores medias >> \n");
    mostrarVetor(n, tam);
 

    return 0;
}


int mostrarVetor(int n, int *vetor) {
    int i;

    printf("[");
    for (i = 0; i < n; i++) {

        printf("%d, ", vetor[i]);
        if (vetor[i] == '\0')
            break;
    
    }

    printf("\b\b]\n");

    return 0;
}

void preencher(int n, int *vetor){
     //preenchendo os inscritos
    for (int i = 0; i < n; i++) {
        printf(">> [%d] = ", i);
        scanf("%d", &vetor[i]);
    }
}

void NotasTeste(int n, int *insc, int *t1, int p1, int *t2,  int p2, int *vetorT1){
    int j = 0;

    printf("Digite a nota de cada participante \n");
    printf("Primeiro teste \n");
    for(int i = 0; i < n; i++){
        printf(">> [%d] = ", insc[i]);
        scanf("%d", &t1[i]);
    }

    printf("\n");
    printf("Segundo teste \n");
    for(int i = 0; i < n; i++){
        printf(">> [%d] = ", insc[i]);
        scanf("%d", &t2[i]);
    }
    
    for(int i = 0; i < n; i++){
        if(t1[i] >= p1 || t2[i] >= p2){
            vetorT1[j] = insc[i]; 
            j++;
        }
    }

    printf(">> Ok!\n\n");
}

void CalcularMedia(int n, int *inscritos, int *t1, int p1, int *t2,  int p2, int *vetorT1){
    
    printf("Inscritos >> \n");
    mostrarVetor(n, inscritos);

    int j = 0;
    float media = 0.0;

    printf("Escolha um dos inscritos para verificar a media \n>> ");
    scanf("%d", &j);

    for(int i = 0; i < n; i++){
        if(j == inscritos[i]){
            media = (t1[i] * p1 + t2[i] * p2) / (p1 + p2);
            printf("Media >> %.2f\n\n", media);
        }
    }
}