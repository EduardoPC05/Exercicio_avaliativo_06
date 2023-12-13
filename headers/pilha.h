#include "utils.h"
#include "paciente.h"

#define MAX_STACK_SIZE 20

typedef struct stack* Pilha;

typedef Infotype Tipo_Informacao;

void init(Pilha* pilha);

bool is_full(Pilha pilha);

bool is_empty(Pilha pilha);

bool push(Pilha pilha, Tipo_Informacao elemento);

Tipo_Informacao pop(Pilha pilha);

void imprime_pilha(Pilha pilha);