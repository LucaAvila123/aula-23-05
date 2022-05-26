#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

struct lista{
    Celula* prim;
    Celula* ult;
};

struct cel{
    Aluno* aluno;
    Celula* prox;
};

Lista* inic_Lista(){
    Lista* lista = (Lista*) malloc (sizeof(Lista));
    lista->prim = NULL;
    lista->ult = NULL;
    return lista;
}

void insere(Lista* lista, Aluno* aluno){
    Celula* nova = (Celula*) malloc(sizeof(Celula));
    nova->prox = lista->prim;
    nova->aluno = aluno;
    lista->prim = nova;
    //alguma coisa precisa ser a última célula alguma vez
    if(lista->ult = NULL) lista->ult = nova;
}

void retira(Lista* lista, int mat){
    //ponteiro auxiliar para antes e depois (importante para excluir células)

    Celula* p = lista->prim;
    Celula* ant = NULL;

    while(p != NULL && RetornaMatricula(p) != mat){
        ant = p;
        p = p->prox;
    }

    if(p == NULL){
        free(p);
        return;
    }
    if(lista->prim == lista->ult){
        lista->prim = lista->ult = NULL;
        free(p);
        return;
    }
    if(lista->prim == p){
        lista->prim = p->prox;
        free(p);
        return;
    }
    if(lista->ult == p){
        lista->ult = ant;
        lista->ult->prox = NULL;
        free(p);
        return;
    }

    ant->prox = p->prox;
    free(p);
}

void imprime(Lista* lista){
    Celula* p;
    for(p=lista->prim; p != NULL; p=p->prox)
        imprime_Nome(p->aluno);
    free(p); //precisa disso?
}

void libera(Lista* lista){
    Celula* p = lista->prim;
    Celula* temp = NULL;

    while(p != NULL){
        temp = p->prox;
        free(p);
        p = temp;
    }

    free(lista);
} 
