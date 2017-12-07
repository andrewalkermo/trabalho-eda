#ifndef FILA_H
#define FILA_H

typedef struct Fila fila;
void inicia(fila *FILA);
int vazia(fila *FILA);
fila *aloca(unsigned int elemento);
void insere(fila *FILA, unsigned int elemento);
fila *retira(fila *FILA);
void limpa(fila *FILA);
unsigned int primeiro(fila *FILA);

#endif
