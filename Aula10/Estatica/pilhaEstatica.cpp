#include<iostream>
#include "pilhaEstatica.h"
using namespace std;

//criar pilha
Pilha* criarPilha(){
    Pilha *pilha = new Pilha;
    if(!pilha){
        cout<<"Erro de aloca��o!!!";
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
        cout << "Pilha est� cheia!\n";
        return 1;
    }
    else return 0; // 0 � para condi��o falsa
}

// verificar vazia
int pilhaEhVazia(Pilha *pilha){
   // return (pilha->qtd==0);
    if(pilha->qtd==0){
        cout << "Pilha est� vazia!\n";
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
    cout << "Matr�cula: ";
    cin >> alunoN->matricula;
    cout << "Nota: ";
    cin >> alunoN->nota;
 }

// inserir elemento sempre no topo
int inserirPilha(Pilha *pilha, Aluno *alunoN){
    if(pilha == nullptr) return 0;
    if(pilhaEhCheia(pilha)==1){ // if(pilhaEhCheia(pilha))
        cout<<"Pilha est� cheia, n�o � poss�vel inserir!\n";
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
        cout<<"Pilha est� vazia, n�o � poss�vel remover!\n";
        return 0;
    }
    pilha->qtd--;
    cout << "Remo��o realizada com sucesso!\n";
    return 1;
}

void exibirTopo(Pilha *pilha){
    if(pilha->qtd ==0) cout << "N�o h� elementos na pilha!\n";
    else{
        cout<<"\nExibindo dados de cadastro (Topo):\n";
        cout << pilha->aluno[pilha->qtd-1].nome << endl;
        cout << pilha->aluno[pilha->qtd-1].matricula << endl;
        cout << pilha->aluno[pilha->qtd-1].nota << endl;
    }
    cout<<"\n\n";
}
