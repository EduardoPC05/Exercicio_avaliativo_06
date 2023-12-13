#include "utils.h"
#include "paciente.h"

typedef struct lista* Lista;

Lista criar();

bool insere_inicio(Lista lista, Infotype info);

bool insere_final(Lista lista, Infotype info);

bool insere_ordenado(Lista lista, Infotype info);

bool apagar(Lista lista, Infotype info);

Infotype dequeue(Lista lista);

void imprime_lista(Lista lista);