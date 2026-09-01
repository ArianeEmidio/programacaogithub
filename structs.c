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
    strcpy(pacientes[0].nome, "Luciana");
    pacientes[0].idade = 40;
    strcpy((pacientes[0]).telefone, "11111-2222");

    strcpy(pacientes[1].nome, "Pedro");
    pacientes[1].idade =35;
    strcpy(pacientes[1].telefone, "33333-4444");

    strcpy(pacientes[2].nome, "Ana");
    pacientes[2].idade = 28;
    strcpy(pacientes[2].telefone, "55555-6666");
}