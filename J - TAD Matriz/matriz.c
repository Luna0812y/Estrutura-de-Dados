#include <stdlib.h>      
#include <stdio.h>       
#include "matriz.h"

Matriz_Uni* cria_uni(int m, int n) {
    Matriz_Uni* mat = (Matriz_Uni*) malloc(sizeof(Matriz_Uni));
    if (mat == NULL) {
        printf("Memória insuficiente!\n");
        exit(1);
    }
    mat->lin = m;
    mat->col = n;
    mat->v = (float*) calloc(m * n, sizeof(float)); // Inicializa todos os valores com zero
    return mat;
}

void imprime_matriz_unidimensional(Matriz_Uni *mat) {
    for (int i = 0; i < mat->lin; i++) {
        for (int j = 0; j < mat->col; j++) {
            printf("%.2f ", mat->v[i * mat->col + j]); // Acesso correto
        }
        printf("\n");
    }
}

void libera_uni(Matriz_Uni* mat){
   free(mat->v);
   free(mat);
}

float acessa_uni(Matriz_Uni* mat, int i, int j){
   int k;  
   if (i<0 || i>=mat->lin || j<0 || j>=mat->col){
      printf("Acesso inválido!\n");
      exit(1);
   }
   k = i*mat->col + j;
   return mat->v[k];
}

void atribui_uni(Matriz_Uni* mat, int i, int j, float v) {
   int k;    
   printf("Tentando atribuir valor %f em [%d][%d]\n", v, i, j); // Debug
   if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col) {
      printf("Atribuição inválida! Linhas: %d, Colunas: %d\n", mat->lin, mat->col); // Debug
      exit(1);
   }
   
   k = i * mat->col + j;   
   mat->v[k] = v;
}


int linhas_uni(Matriz_Uni* mat){
   return mat->lin;
}

int colunas_uni(Matriz_Uni* mat){
   return mat->col;
}


