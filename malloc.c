//Objetivo do programa: Alocar dinamicamente 5 inteiros, inicializá-los manualmente e imprimir seus valores
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ponteiro; //Declaração de um ponteiro para inteiro, o * indica que é uma variavel especial.
    ponteiro = (int*) malloc(5 * sizeof(int)); // Aloca memoria para 5 inteiros

    if (ponteiro != NULL) { // Verifica se a alocação foi bem-sucedida //Verifica se é diferente de NULL, ou seja, se a alocação foi bem-sucedida
        int i;
        for (i = 0; i < 5; i++){ //Vai de 0 a 4, inicializando os valores do ponteiro
            ponteiro[i] = i + 1; // Inicializa os valores manualmente
        }
        for (i = 0; i < 5; i++){
            printf("%d \n", ponteiro[i]); // Imprime os valores armazenados
        }
        free(ponteiro); // Libera a memória alocada
    } else{
        printf("Erro ao alocar memória.\n"); // Mensagem de erro caso a alocação falhe
    }

}