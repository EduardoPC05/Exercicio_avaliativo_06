#include "../headers/pilha.h"

typedef struct node* Node;

struct node{
    Tipo_Informacao info;
    Node next;
};

struct stack{
    Node topo;
};

void init(Pilha* pilha){
    *pilha = malloc(sizeof(struct stack));
    (*pilha)->topo = NULL;
}

bool is_full(Pilha pilha){
    return false;
}

bool is_empty(Pilha pilha){
    return pilha->topo == NULL;
}

bool push(Pilha pilha, Tipo_Informacao elemento){
    if(pilha != NULL){
        Node novo = malloc(sizeof(struct node));
        novo->info = elemento;
        novo->next = pilha->topo;
        pilha->topo = novo;
        return true;
    }
    return false;
}

Tipo_Informacao pop(Pilha pilha){
    Tipo_Informacao retorno = NULL;
    if(pilha != NULL){
        if(!is_empty(pilha)){
            Node rip = pilha->topo;
            retorno = rip->info;
            pilha->topo = rip->next;
            free(rip);
        }
    }
    return retorno;
}

void imprime_pilha(Pilha pilha){
    Pilha aux;
    Tipo_Informacao elemento;
    init(&aux);
    printf("PILHA - LOTE \n");
    while (!is_empty(pilha)){
      elemento = pop(pilha);
      printf(" PACIENTE: %d | LOTE: %d | PRIORIDADE: %d\n",get_nsus(elemento),get_lote(elemento),get_prioridade(elemento));
      push(aux,elemento);
    }
    while (!is_empty(aux)){
      push(pilha,pop(aux));
    }
        
    
}