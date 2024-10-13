#include "header/functions.h"

void atribuiValores(Jogador &jogador, int i)
{
    cout << "Digite o nome do jogador " << i + 1 << ": ";
    getline(cin, jogador.nome);
    cout << "Digite a posição do jogador " << i + 1 << ": ";
    getline(cin, jogador.posicao);
    cout << "Digite a quantidade de gols do jogador " << i + 1 << ": ";
    cin >> jogador.gols;
    cout << "Digite a quantidade de partidas do jogador " << i + 1 << ": ";
    cin >> jogador.partidas;
    cout << endl;

    cin.ignore();
}

void imprimir(Jogador &jogador, int i)
{
    cout << "======== Jogador " << i + 1 << " ========" << endl;
    cout << "Nome: " << jogador.nome << endl;
    cout << "Posição: " << jogador.posicao << endl;
    cout << "Gols: " << jogador.gols << endl;
    cout << "Partidas: " << jogador.partidas << endl;
    cout << "===========================" << endl;
    cout << endl;
}

void exibirGols(Jogador *jogador, int quantidade)
{
    int totalGols = 0;

    for (int i = 0; i < quantidade; i++)
    {
        totalGols += jogador[i].gols;
    }
    cout << "====== Total de gols ======" << endl;
    cout << "Total de gols: " << totalGols << endl;
    cout << "===========================" << endl;
}

void verificaStatus(Jogador *jogador, int quantidade)
{
    cout << "===== Verifica Status =====" << endl;
    for (int i = 0; i < quantidade; i++)
    {
        if (jogador[i].gols > 5)
        {
            cout << jogador[i].nome << " é um jogador artilheiro!" << endl;
            continue;
        }

        cout << jogador[i].nome << " é um jogador ruim!" << endl;
    }
    cout << "===========================" << endl;
}
