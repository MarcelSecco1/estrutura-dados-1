#include <iostream>
#include "pilhaDinamica.h" //inclui os Prot�tipos
using namespace std;

Pilha* criarPilha(){
    Pilha* topo = new Pilha;
    if(topo != nullptr){
        *topo=nullptr;
        cout << "Pilha Criada com sucesso!\n";
    }
    return topo;
}

void liberarPilha(Pilha *topo){
    if(topo != nullptr){
        No *noAux;
        while((*topo) != nullptr){
            noAux = *topo;
            *topo = noAux->prox;//*topo=top->prox;
            delete noAux;
        }
        delete topo;
    }
}

int consultarTopo(Pilha* topo){
    if(topo == nullptr){
        cout << "Pilha n�o existe!\n";
        return 0;
    }
    if(*topo == nullptr){//pilha vazia
        cout << "Pilha Vazia!\n";
        return 0;
    }
    No *noAux = *topo;
    cout << noAux->dados.nome << endl;
    cout << noAux->dados.matricula << endl;
    cout << noAux->dados.nota << endl;
    return 1;
}
int removerPilha(Pilha* topo){
     if(topo == nullptr){
        cout << "Pilha n�o existe!\n";
        return 0;
    }
    if(*topo == nullptr){//pilha vazia
        cout << "Pilha Vazia!\n";
        return 0;
    }
    No *noAux = *topo;
    *topo = noAux->prox;
    delete noAux;
    cout << "Remo��o realizada com sucesso!\n";
    return 1;
}

int inserirPilha(Pilha* topo, Aluno *alunoN){
    if(topo == nullptr){
        cout << "Fila n�o existe!\n";
        return 0;
    }
    No *novoNo = new No;
    if(novoNo == nullptr){
        cout << "Espa�o de mem�ria n�o alocado para o n�!\n";
        return 0;
    }
    novoNo->dados = *alunoN;
    novoNo->prox = nullptr;

    novoNo->prox=*topo;
    *topo=novoNo;
    cout << "Inser��o realizada com sucesso!\n";
    return 1;
}

int exibirTopo(Pilha* topo){
    if(topo == nullptr){
        cout << "Pilha n�o existe!\n";
        return 0;
    }
    if(*topo == nullptr){//pilha vazia
        cout << "N�o h� elementos na Pilha!\n";
        return 0;
    }
    No* noAux = *topo;
    cout << "Nome:" << noAux->dados.nome<< "\n";
    cout << "Matricula: " << noAux->dados.matricula << "\n";
    cout <<"Nota: " <<noAux->dados.nota << "\n\n\n";
    return 1;
}

void cadastrarAluno(Aluno *alunoN){
    cout << "Cadastro Aluno:\n";
    cout <<"Nome: ";
    fflush(stdin);
    cin.getline(alunoN->nome, sizeof(alunoN->nome));
    cout << "Matr�cula: ";
    cin >> alunoN->matricula;
    cout << "Nota: ";
    cin >> alunoN->nota;
 }
