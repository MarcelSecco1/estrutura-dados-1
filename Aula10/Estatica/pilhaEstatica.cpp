#include<iostream>
#include "pilhaEstatica.h"
using namespace std;

//criar pilha
Pilha* criarPilha(){
    Pilha *pilha = new Pilha;
    if(!pilha){
        cout<<"Erro de alocação!!!";
        exit(1);
    }
    pilha->qtd =0;
    return pilha;
}

// apagar pilha
void apagarPilha(Pilha *pilha){
    delete pilha;
}

// verificar cheia
int pilhaEhCheia(Pilha *pilha){
    if(pilha->qtd==MAX){
        cout << "Pilha está cheia!\n";
        return 1;
    }
    else return 0; // 0 é para condição falsa
}

// verificar vazia
int pilhaEhVazia(Pilha *pilha){
   // return (pilha->qtd==0);
    if(pilha->qtd==0){
        cout << "Pilha está vazia!\n";
        return 1;
    }
    else return 0;
}

//cadastro aluno
void cadastrarAluno(Aluno *alunoN){
    cout << "Cadastro Aluno:\n";
    cout <<"Nome: ";
    fflush(stdin);
    cin.getline(alunoN->nome, sizeof(alunoN->nome));
    cout << "Matrícula: ";
    cin >> alunoN->matricula;
    cout << "Nota: ";
    cin >> alunoN->nota;
 }

// inserir elemento sempre no topo
int inserirPilha(Pilha *pilha, Aluno *alunoN){
    if(pilha == nullptr) return 0;
    if(pilhaEhCheia(pilha)==1){ // if(pilhaEhCheia(pilha))
        cout<<"Pilha está cheia, não é possível inserir!\n";
        return 0;
    }
    pilha->aluno[pilha->qtd]=*alunoN;
    pilha->qtd++;
    cout << "Cadastro realizado com sucesso!\n";
    return 1;
}

// remover elemento sempre do topo
int removerPilha(Pilha *pilha){
    if(pilha == nullptr) return 0;
    if(pilha->qtd==0){ // if(pilhaEhVazia(pilha)) return 0;
        cout<<"Pilha está vazia, não é possível remover!\n";
        return 0;
    }
    pilha->qtd--;
    cout << "Remoção realizada com sucesso!\n";
    return 1;
}

void exibirTopo(Pilha *pilha){
    if(pilha->qtd ==0) cout << "Não há elementos na pilha!\n";
    else{
        cout<<"\nExibindo dados de cadastro (Topo):\n";
        cout << pilha->aluno[pilha->qtd-1].nome << endl;
        cout << pilha->aluno[pilha->qtd-1].matricula << endl;
        cout << pilha->aluno[pilha->qtd-1].nota << endl;
    }
    cout<<"\n\n";
}
