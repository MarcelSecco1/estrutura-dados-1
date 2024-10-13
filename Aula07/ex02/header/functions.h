#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

struct Jogador
{
    string nome, posicao;
    int gols;
    int partidas;
};

void atribuiValores(Jogador &jogador, int i);
void imprimir(Jogador &jogador, int i);
void exibirGols(Jogador *jogador, int quantidade);
void verificaStatus(Jogador *jogador, int quantidade);



#endif
