#include "headers/utils.h"
#include "headers/fila.h"
#include "headers/paciente.h"
#include "headers/pilha.h"

Infotype ler_paciente();
void dar_vacina(Infotype paciente,Pilha Pilha);

int main(int argc, char const *argv[])
{
    int aux;

    Lista fila = criar();
    Pilha pilha;
    init(&pilha);

    do
    {
       printf("\n-----MENU-----\n");
       printf("1 - INSERIR PACIENTE\n");
       printf("2 - VACINAR PACIENTE\n");
       printf("3 - LISTAR PACIENTES\n");
       printf("4 - LISTAR PACIENTES VACINADOS\n");
       printf("0 - SAIR\n");

       scanf("%d",&aux);
       

       switch (aux){
       case 1:
            insere_ordenado(fila,ler_paciente());
            break;
       case 2:
            dar_vacina(dequeue(fila),pilha);
            break;
       case 3:
            imprime_lista(fila);
            break;
        case 4:
            imprime_pilha(pilha);
            break;
       }
    } while (aux != 0);
    

    return 0;
}

Infotype ler_paciente(){
    long n_sus;
    int idade;
    int aux;
    Infotype retorno;

    bool q[10];
    printf("DIGITE SEU NUMERO DO SUS:");
    scanf("%ld",&n_sus);
    printf("DIGITE SUA IDADE:");
    scanf("%d",&idade);
    printf("\nPARA RESPONDER AS PERGUNTAS A SEGUIR DIGITE 1 PARA SIM E 0 PARA NAO\n");
    printf("TRABALHA NA ÁREA DA SAÚDE?\n");
    scanf("%d",&aux);
    q[0] = aux;
    printf("FAZ PARTE DA POPULACAO INDIGENA?\n");
    scanf("%d",&aux);
    q[1] = aux;
    printf("FAZ PARTE DA POPULAÇÃO RIBEIRINHA E QUILOMBOLA\n");
    scanf("%d",&aux);
    q[2] = aux;
    printf("POSSUI ALGUMA COMORBIDADE?\n");
    scanf("%d",&aux);
    q[3] = aux;
    printf("TRABALHA NA AREA DA EDUCACAO\n");
    scanf("%d",&aux);
    q[4] = aux;
    printf("POSSUI DEFICIENCIA SEVERA?\n");
    scanf("%d",&aux);
    q[5] = aux;
    printf("FAZ PARTE DA FORCA DE SEGURANCA OU SALVAMENTO?\n");
    scanf("%d",&aux);
    q[6] = aux;
    printf("E FUNCIONARIO DO SISTEMA PENITENCIARIO\n");
    scanf("%d",&aux);
    q[7] = aux;
    printf("FAZ PARTE DA POPULACAO CARCERARIA\n");
    scanf("%d",&aux);
    q[8] = aux;

    retorno = criar_paciente(n_sus,idade,q);

    return retorno;
}

void dar_vacina(Infotype paciente,Pilha Pilha){
    int lote;

    printf("DIGITE O LOTE DA VACINA:");
    scanf("%d",&lote);

    vacinar_paciente(paciente,lote);

    push(Pilha,paciente);

}