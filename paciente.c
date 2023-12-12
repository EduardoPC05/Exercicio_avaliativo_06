#include "paciente.h"
  
struct paciente{
   long numero_sus;
   int idade;
   int prioridade;
   int lote;
};

Infotype criar_paciente(long n_sus, int idade, int prioridade){
    Infotype paciente = malloc(sizeof(struct paciente));
    paciente->numero_sus = n_sus;
    paciente->idade = idade;
    paciente->prioridade = prioridade;
    paciente->lote = NULL;
    return paciente;
}

bool vacinar_paciente(Infotype paciente, int lote){
    paciente->lote = lote;
}

int get_prioridade(Infotype paciente){
    return paciente->prioridade;
}

