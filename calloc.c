
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro;
    ponteiro = (int*) calloc(5, sizeof(int)); //Aloca memória para 5 inteiros e inicializa todos os valores com zero
    
    if (ponteiro != NULL) {
        int i;
        for (i = 0; i < 5; i++){
            printf("%d ", ponteiro[i]); // Exibe os valores iniciais (todos devem ser 0)
        }
        free(ponteiro); // Libera a memoria
    } else{
        printf("Erro na alocação de memoria.\n");
    }
}