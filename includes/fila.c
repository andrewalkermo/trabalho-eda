#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
int tam;
struct Fila {
    int elemento;
    struct Fila *proximo;
};
void inicia(fila *sequencia)
{
	sequencia->proximo = NULL;
	tam=0;
}

int vazia(fila *sequencia)
{
	if(sequencia->proximo == NULL)
		return 1;
	else
		return 0;
}

fila *aloca()
{
	fila *novo=(fila *) malloc(sizeof(fila));
	if(!novo){
		printf("Sem memoria!\n");
		exit(1);
	}else{
		scanf("%u", &novo->elemento);
		return novo;
	}
}
