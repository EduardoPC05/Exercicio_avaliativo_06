#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


typedef struct paciente* Infotype;


Infotype criar_paciente(long n_sus, int idade, int prioridade);

bool vacinar_paciente(Infotype paciente, int lote);

int get_prioridade(Infotype paciente);


