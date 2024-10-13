#include "header/functions.h"
#define QUANTIDADE_JOGADORES 10

int main()
{
    Jogador *jogador = new Jogador[QUANTIDADE_JOGADORES];

    for (int i = 0; i < QUANTIDADE_JOGADORES; i++)
    {
        atribuiValores(jogador[i], i);
    }

    for (int i = 0; i < QUANTIDADE_JOGADORES; i++)
    {
        imprimir(jogador[i], i);
    }

    exibirGols(jogador, QUANTIDADE_JOGADORES);

    verificaStatus(jogador, QUANTIDADE_JOGADORES);

    delete[] jogador;

    return 0;
}
