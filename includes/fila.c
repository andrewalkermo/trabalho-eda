#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
int tam;
struct Fila {
    int elemento;
    struct Fila *proximo;
};
void inicia(fila *FILA)
{
	FILA->proximo = FILA;
	tam=0;
}

int vazia(fila *FILA)
{
    printf("sss%d\n", FILA->elemento);
	if(FILA->proximo == FILA && tam == 0) {
        return 1;

    }
	else {
        return 0;
    }
}

fila *aloca(unsigned int elemento)
{
	fila *novo=(fila *) malloc(sizeof(fila));
	if(!novo){
		exit(1);
	}else{
        novo->elemento = elemento;
		return novo;
	}
}
void insere(fila *FILA, unsigned int elemento)
{
	fila *novo=aloca(elemento);

	if(vazia(FILA)) {
        FILA = novo;
    }
	else{
		fila *tmp = FILA->proximo;

		while(tmp->proximo != FILA)
			tmp = tmp->proximo;

		tmp->proximo = novo;
	}
	tam++;
}

fila *retira(fila *FILA)
{
	if(FILA->proximo == FILA){
		return FILA;
	}else{
		fila *tmp = FILA->proximo;
		FILA->proximo = tmp->proximo;
		tam--;
		return tmp;
	}

}

void limpa(fila *FILA)
{
	if(!vazia(FILA)){
		fila *proxFila,
			  *atual;

		atual = FILA->proximo;
		while(atual != FILA){
			proxFila = atual->proximo;
			free(atual);
			atual = proxFila;
		}
	}
    tam = 0;
}

unsigned int primeiro(fila *FILA)
{
	if(vazia(FILA)){
		exit(1);
	}
    return FILA->elemento;

}
