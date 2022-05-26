#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pokemon.h"

struct pokemon{
    char* nome;
    int pokedex;
};

tPokemon* inicializaPokemon(char* nome, int pokedex){
    tPokemon* pokemon = (tPokemon*) malloc(sizeof(tPokemon));
    pokemon->nome = strdup(nome);
    pokemon->pokedex = pokedex;
    //printf("começou\n");
    return pokemon;
}

char* retornaNome(tPokemon* pokemon){
    return pokemon->nome;
}

int retornaDex(tPokemon* pokemon){
    return pokemon->pokedex;
}

void imprimePokemon(tPokemon* pokemon){
    printf("%s %d\n", pokemon->nome, pokemon->pokedex);
}

void abandona(tPokemon* pokemon){
    free(pokemon->nome);
    free(pokemon);
}