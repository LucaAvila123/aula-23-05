#include "aluno.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno{
    char* nome; 
	int matricula; 
	float p1; 
	float p2;
	float p3;
};

Aluno* inicia_Aluno(char* nome, int matricula, float p1, float p2, float p3){
    Aluno* aluno = (Aluno*) malloc (sizeof(Aluno));
    aluno->nome = strdup(nome);
    aluno->matricula = matricula;
    aluno->p1 = p1;
    aluno->p2 = p2;
    aluno->p3 = p3;

    return aluno;
}

void imprime_Nome(Aluno* aluno){
    printf("%s", aluno->nome);
}

float MediaAluno(Aluno* aluno){
    float media = aluno->p1 + aluno->p2 + aluno->p3;
    media /= 3.0;

    return media;
}

void liberaAluno(Aluno* aluno){
    free(aluno->nome);
    free(aluno);
}

int RetornaMatricula(Aluno* aluno){ return aluno->matricula; }
