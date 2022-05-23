#ifndef LISTA_H
#define LISTA_H

#include "aluno.h"

typedef struct lista Lista;
typedef struct cel Celula;

//inicialização
Lista* inic_Lista();
//inserção
void insere(Lista* lista, Aluno* aluno);
//retirada
void retira(Lista* lista, int mat);
//impressão
void imprime(Lista* lista);
//liberação
void libera(Lista* lista);

#endif