#include "fila.h"
#include "paciente.h"

int main(int argc, char const *argv[])
{
    Lista fila = criar();

    insere_ordenado(fila,criar_paciente(4444,12));
    insere_ordenado(fila,criar_paciente(1111,31));
    imprime_lista(fila);


    return 0;
}
