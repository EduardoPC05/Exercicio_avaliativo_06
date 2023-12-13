#include "headers/utils.h"
#include "headers/fila.h"
#include "headers/paciente.h"
#include "headers/pilha.h"

Infotype ler_paciente();
void dar_vacina(Infotype paciente,Pilha Pilha);

int main(int argc, char const *argv[])
{
    Lista fila = criar();
    Pilha pilha;

    init(&pilha);

    insere_ordenado(fila,ler_paciente());
    insere_ordenado(fila,ler_paciente());

    imprime_lista(fila);

    dar_vacina(dequeue(fila),pilha);
    dar_vacina(dequeue(fila),pilha);
    
    imprime_pilha(pilha);

    return 0;
}

Infotype ler_paciente(){
    long n_sus;
    int idade;
    int aux;
    Infotype retorno;

    bool q[10];
    printf("Digite o numero do sus:");
    scanf("%ld",&n_sus);
    printf("Digite a idade: ");
    scanf("%d",&idade);
    printf("PARA RESPONDER AS PERGUNTAS A SEGUIR DIGITE 1 PARA SIM E 0 PARA NÃO\n");
    printf("Trabalha na saúde?\n");
    scanf("%d",&aux);
    q[0] = aux;
    printf("Faz parte da População indígena?\n");
    scanf("%d",&aux);
    q[1] = aux;
    printf("Faz parte da População ribeirinha e quilombola?\n");
    scanf("%d",&aux);
    q[2] = aux;
    printf("Possui alguma comorbidade?\n");
    scanf("%d",&aux);
    q[3] = aux;
    printf("Trabalha na educação?\n");
    scanf("%d",&aux);
    q[4] = aux;
    printf("Possui deficiẽncia permanente severa?\n");
    scanf("%d",&aux);
    q[5] = aux;
    printf("Faz parte da força de segurança e salvamento?\n");
    scanf("%d",&aux);
    q[6] = aux;
    printf("É funcionário do sistema penintenciário?\n");
    scanf("%d",&aux);
    q[7] = aux;
    printf("Faz parte da população carcerária?\n");
    scanf("%d",&aux);
    q[8] = aux;

    retorno = criar_paciente(n_sus,idade,q);

    return retorno;
}

void dar_vacina(Infotype paciente,Pilha Pilha){
    int lote;

    printf("Digite o lote da vacina: ");
    scanf("%d",&lote);

    vacinar_paciente(paciente,lote);

    push(Pilha,paciente);

}