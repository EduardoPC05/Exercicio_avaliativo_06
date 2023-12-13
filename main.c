#include "fila.h"
#include "paciente.h"

int main(int argc, char const *argv[])
{
    Lista fila = criar();

    int q[9] = {0,0,0,0,0,0,0,0,1};
    int q2[9] = {1,0,0,0,0,0,0,0,1};

    insere_ordenado(fila,criar_paciente(4444,65,q2));
    insere_ordenado(fila,criar_paciente(2222,32,q));
    insere_ordenado(fila,criar_paciente(2232,67,q));
    insere_ordenado(fila,criar_paciente(4445,32,q));
    imprime_lista(fila);



    return 0;
}
