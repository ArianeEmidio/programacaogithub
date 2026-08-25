#include <stdio.h>
#include <stdlib.h>

int main(){
    //Definição de variaveis do tipo inteiro
    int numero = 10;
    int *ponteiroInt = &numero; //Ponteiro para um inteiro, inicializado com o endereço de 'numero' //Vai guardar o endereço de memoria para a variavel 'numero'

    //Exibindo o valor e o endereço na variável 'numero' usando ponteiros
    printf("Valor de numero: %d\n", numero);
    printf("Endereco de numero: %p\n", ponteiroInt);
    printf("Valor apontado por ponteiroInt: %d\n", *ponteiroInt); //Desreferenciação do ponteiro para obter o valor

    //Alterando o valor da variável 'numero' atraves do ponteiro
    *ponteiroInt = 20; //Modifica o valor de 'numero'
    printf("Novo valor de numero apos modificacao pelo ponteiro: %d\n", numero);

    //Caracteristicas especificas dos ponteiros
    //Alocação dinamica de memoria com malloc
    int *ponteiroDinamico;
    ponteiroDinamico = (int *) malloc(sizeof(int)); //Alocando memoria para um inteiro

    if (ponteiroDinamico == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1; //Sai do programa se a alocação falhar
    }
    // Inicializando o valor alocado dinamicamente e exibindo
    *ponteiroDinamico = 50;
    printf("Valor armazenado na memoria alocada dinamicamente: %d\n", *ponteiroDinamico);
    
    //Uso correto dos ponteiros na programação
    //Exemplo de uso seguro de ponteiro com verificação e liberação de memoria
    free(ponteiroDinamico); //Liberando a memoria alocada dinamicamente
    ponteiroDinamico = NULL; //Evita acessos acidentais, tornando o ponteiro invalido (nulo) 

    //Testando o ponteiro após liberar a memoria
    if (ponteiroDinamico == NULL) {
        printf("Memoria foi liberada corretamente e o ponteiro está invalido.\n");
    }
    return 0; //Finaliza o programa com sucesso
}