#include "lista.h"
#include "pokemon.h"

int main(){
    Lista* listaInicial = inicializaListaVazia();

    tPokemon* pokemon1 = inicializaPokemon("Mew", 151);
    tPokemon* pokemon2 = inicializaPokemon("Charmander", 4);
    tPokemon* pokemon3 = inicializaPokemon("Mewtwo", 150);
    tPokemon* pokemon4 = inicializaPokemon("Pikachu", 25);

    insere(listaInicial, pokemon1);
    insere(listaInicial, pokemon2);
    insere(listaInicial, pokemon3);
    insere(listaInicial, pokemon4);

    retira(listaInicial, "Mew");
    imprime(listaInicial);

    release(listaInicial);
    return 0;
}