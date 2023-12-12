#include "fila.h"
#include "paciente.h"

int main(int argc, char const *argv[])
{
    Lista fila = criar();


    insere_ordenado(fila,criar_paciente(4444,12,4));
    insere_ordenado(fila,criar_paciente(1111,12,1));
    insere_ordenado(fila,criar_paciente(3322,12,3));
    insere_ordenado(fila,criar_paciente(3366,12,3));
    insere_ordenado(fila,criar_paciente(3333,12,3));
    insere_ordenado(fila,criar_paciente(3355,12,3));
    insere_ordenado(fila,criar_paciente(1110,12,1));
    insere_ordenado(fila,criar_paciente(2222,12,2));
    imprime_lista(fila);
    dequeue(fila);
    dequeue(fila);
    dequeue(fila);
    dequeue(fila);
    printf("\n\n\nAPAGADO\n\n\n");
    imprime_lista(fila);

    return 0;
}
