#include <stdio.h>
#include <stdlib.h>
#include "includes/fila.h"
int main() {

    unsigned int caixasDisponiveis; //M
    unsigned int clientesQtn;       //N
    unsigned int clienteCod;        //C
    unsigned int operacao;          //O
    unsigned int valor;             //V

    scanf("%u%u", &caixasDisponiveis, &clientesQtn);

    for (size_t i = 0; i < clientesQtn; i++) {
        scanf("%u%u%u\n", &clienteCod, &operacao, &valor);
    }

    return 0;
}
