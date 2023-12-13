#include "paciente.h"
  
struct paciente{
   long numero_sus;
   int idade;
   int prioridade;
   int lote;
};




Infotype criar_paciente(long n_sus, int idade,int q[]){
    Infotype paciente = malloc(sizeof(struct paciente));
    paciente->numero_sus = n_sus;
    paciente->idade = idade;
    paciente->prioridade = definir_prioridade(q,paciente);
    paciente->lote = -1;
    return paciente;
}


int definir_prioridade(int q[],Infotype paciente){
    int retorno = 10;
    bool achou = false;
    
    int i = 0;

    while (i < 9 && !achou){
       if (q[i] == 1){
        if (i < 1){
            retorno = i+1;
        }else{
            retorno = i+2;
        }
        achou = true;
       }
       i++;
    }

    if (retorno != 1 && paciente->idade >= 60){
        retorno = 2;
    }

    return retorno;
}

bool vacinar_paciente(Infotype paciente, int lote){
    paciente->lote = lote;
}

int get_prioridade(Infotype paciente){
    return paciente->prioridade;
}

