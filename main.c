#include <stdio.h>
#include <stdlib.h>
#include "includes/fila.h"
int main() {
    fila *filaClientes =(fila *) malloc(sizeof(filaClientes));
    inicia(filaClientes);
    unsigned int caixasDisponiveis; //M
    unsigned int clientesQtn;       //N
    unsigned int clienteCod;        //C
    unsigned int operacao;          //O
    unsigned int valor;             //V
    scanf("%u%u", &caixasDisponiveis, &clientesQtn);

    for (size_t i = 0; i < clientesQtn; i++) {
        scanf("%u%u%u", &clienteCod, &operacao, &valor);
        insere(filaClientes, clienteCod);

    }
    printf("%u\n", primeiro(filaClientes));
    return 0;
}
