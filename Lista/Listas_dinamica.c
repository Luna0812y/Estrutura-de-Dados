#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num;
} Valores;

Valores listas[10];


void incluir(){
    for(int i = 0; i < 10; i++){
        printf("Digite o (%d) valor: \n", i + 1);
        scanf("%d", listas[i].num);
    }
}

void mostrar(){
    printf("Lista de valores: \n");
    for(int i = 0; i < 10; i++){
        printf("%d - Valor: \n", i + 1, listas[i].num);
    }
}

int procurar(int dado){
    for(int i = 0; i < 10; i++){
        if(listas[i].num == dado){
            return i;
        }
    }

    return -1;
}

void remover(int rem){
    if(rem >= 0 && rem < 10){
        listas[rem] = listas[9];
    } else {
        printf("Posição inválida");
    }
}

int main(){
    char menu[] = "\n>>> Bem-vindo(a) <<<\n\
    1 - Inserir \n\
    2 - Mostrar  \n\
    3 - Procurar  \n\
    4 - Remover  \n\
    0 - Sair    \n\
    >>> ";
    int opcao;
    printf("%s", menu);
    scanf("%d", &opcao);

    while(opcao != 0){
        if (opcao == 1){
            //inserir
            incluir();

        } else if(opcao == 2){
            //mostrar
            mostrar();
            
        } else if(opcao == 3){
            //procruar na lista
            int dado;
            printf("Digite um número: \n");
            scanf("%d", &dado);
            procurar(dado);
            
        } else if(opcao == 4){
            //remover da lista
            int numero;
            printf("Digite um número para remover: \n");
            scanf("%d", &numero);
            remover(numero);
            mostrar();
        
        } else {
            printf("Opcao Invalida");
        }

        printf("%s", menu);
        scanf("%d", &opcao);
    }
    
    return 0;
}