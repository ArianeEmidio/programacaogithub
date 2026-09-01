#include <stdio.h>
#include <string.h>

struct Paciente {
    char nome[50];
    int idade;
    char telefone[15];
};
int main() {
    struct Paciente pacientes[3];
    int i;

    //Preenchendo os dados dos pacientes
    strcpy(pacientes[0].nome, "Luciana"); // função strcpy() para copiar a string "Luciana" para o campo nome do primeiro paciente
    pacientes[0].idade = 40;
    strcpy((pacientes[0]).telefone, "11111-2222");

    strcpy(pacientes[1].nome, "Pedro"); 
    pacientes[1].idade =35;
    strcpy(pacientes[1].telefone, "33333-4444");

    strcpy(pacientes[2].nome, "Ana");
    pacientes[2].idade = 28;
    strcpy(pacientes[2].telefone, "55555-6666");

    //Exibindo os dados dos pacientes
    for (i = 0; i < 3; i++) {
        printf("Paciente %d:\n", i + 1);
        printf("Nome: %s\n", pacientes[i].nome);
        printf("Idade: %d\n", pacientes[i].idade);
        printf("Telefone: %s\n\n", pacientes[i].telefone);
    }
    return 0;
}