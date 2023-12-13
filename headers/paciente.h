#include "utils.h"

typedef struct paciente* Infotype;

Infotype criar_paciente(long n_sus, int idade,bool q[]);

int definir_prioridade(bool q[],Infotype paciente);

Infotype vacinar_paciente(Infotype paciente, int lote);

int get_prioridade(Infotype paciente);

int get_lote(Infotype paciente);

int get_nsus(Infotype paciente);
