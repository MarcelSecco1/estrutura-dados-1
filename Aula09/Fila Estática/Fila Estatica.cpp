#include<iostream>
#include "Fila Estatica.h"
using namespace std;
//criar lista
Fila* criarFila(){
    Fila *fila = new Fila;
    if(!fila){
        cout<<"Erro de alocação!!!";
        exit(1);
    }
    fila->qtd =0;
    fila->inicio =0;
    fila->fim =0;
    return fila;
}
// apagar lista
void apagarFila(Fila *fila){
    delete fila;
}
// verificar cheia
int filaEhCheia(Fila *fila){
    if(fila->qtd==MAX){
        cout << "Fila está cheia!\n";
        return 1;
    }
    else return 0; // 0 é para condição falsa
}
// verificar vazia
int filaEhVazia(Fila *fila){
   // return (fila->qtd==0);
    if(fila->qtd==0){
        cout << "Fila está vazia!\n";
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
// inserir elemento sempre no final
int inserirFila(Fila *fila, Aluno *alunoN){
    if(fila == nullptr) return 0;
    if(filaEhCheia(fila)==1) // if(filaEhCheia(fila))
        return 0;
    if(fila->fim==MAX){
        fila->fim = 0;
    }
    fila->aluno[fila->fim]=*alunoN;
    fila->fim++;
    fila->qtd++;
    cout << "Cadastro realizado com sucesso!\n";
    return 1;
}
// remover elemento sempre no inicio
int removerFila(Fila *fila){
    if(fila == nullptr) return 0;
    if(fila->qtd==0) // if(filaEhVazia(fila)) return 0;
        return 0;
    fila->inicio++;
    if(fila->inicio==MAX) fila->inicio=0;
    fila->qtd--;
    cout << "Remoção realizada com sucesso!\n";
    return 1;
}
void exibirFila(Fila *fila){
    int i,j;
    if(fila->qtd ==0) cout << "Não há cadastro de aluno!\n";
    else{
        for(i=1,j=fila->inicio;i<=fila->qtd;i++){
            cout<< i <<"º Cadastro:\n"
                << "Nome: " << fila->aluno[j].nome
                << "\nMatrícula: " << fila->aluno[j].matricula
                << "\nNota: " << fila->aluno[j].nota << "\n\n";
            j++;
            if(j==MAX) j=0;
        }
        cout<<"\n\n";
    }
}

