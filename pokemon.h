#ifndef POKEMON_H
#define POKEMON_H

typedef struct pokemon tPokemon;

char* retornaNome(tPokemon* pokemon);
int retornaDex(tPokemon* pokemon);
tPokemon* inicializaPokemon(char* nome, int pokedex);
void imprimePokemon(tPokemon* pokemon);
void abandona(tPokemon* pokemon);

#endif