#ifndef ALUNO_H
#define ALUNO_H

typedef struct aluno Aluno;

Aluno* inicia_Aluno();
void imprime_Nome(Aluno* aluno);
float MediaAluno(Aluno* aluno);
void liberaAluno(Aluno* aluno);
int RetornaMatricula(Aluno* aluno);

#endif