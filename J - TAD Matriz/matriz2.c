#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

Matriz *cria_bid(int m, int n){
   int i;
   Matriz *mat = (Matriz *)malloc(sizeof(Matriz));
   if (mat == NULL)
   {
      printf("Memória insuficiente!\n");
      exit(1);
   }
   mat->lin = m;
   mat->col = n;
   mat->v = (float **)malloc(m * sizeof(float *));
   for (i = 0; i < m; i++)
      mat->v[i] = (float *)malloc(n * sizeof(float));
   return mat;
}

void imprime_matriz_bidimensional(Matriz *mat){
   for (int i = 0; i < mat->lin; i++){
      for (int j = 0; j < mat->col; j++){
         printf("%.2f ", mat->v[i][j]);
      }
      printf("\n");
   }
}

void libera_bid(Matriz *mat){
   int i;
   for (i = 0; i < mat->lin; i++)
      free(mat->v[i]);
   free(mat->v);
   free(mat);
}

float acessa_bid(Matriz *mat, int i, int j)
{
   if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col)
   {
      printf("Acesso inválido!\n");
      exit(1);
   }
   return mat->v[i][j];
}

void atribui_bid(Matriz *mat, int i, int j, float v) {
   printf("Tentando atribuir valor %.2f em [%d][%d]\n", v, i, j); // Debug
   if (i < 0 || i >= mat->lin || j < 0 || j >= mat->col) {
      printf("Atribuição inválida! Linhas: %d, Colunas: %d\n", mat->lin, mat->col); // Debug
      exit(1);
   }
   mat->v[i][j] = v;
}


int linhas_bid(Matriz *mat)
{
   return mat->lin;
}

int colunas_bid(Matriz *mat)
{
   return mat->col;
}