#include <iostream>
#include "FilaDinamica.h" //inclui os Protótipos
using namespace std;

Fila* criarFila(){
    Fila* fila = new Fila;
    if(fila != nullptr){
        fila->final = nullptr;
        fila->inicio = nullptr;
        fila->qtd = 0;
    }
    return fila;
}

void liberarFila(Fila *fila){
    if(fila != nullptr){
        Elem* no;
        while(fila->inicio != nullptr){
            no = fila->inicio;
            fila->inicio = fila->inicio->prox;
            delete no;
        }
        delete fila;
    }
}

int consultarFila(Fila* fila, Aluno *alunoN){
    if(fila == nullptr){
        cout << "Fila não existe!\n";
        return 0;
    }
    if(fila->inicio == nullptr){//fila vazia
        cout << "Fila Vazia!\n";
        return 0;
    }
    *alunoN = fila->inicio->dados;
    return 1;
}

int inserirFila(Fila* fila, Aluno *alunoN){
    if(fila == nullptr){
        cout << "Fila não existe!\n";
        return 0;
    }
    Elem *no = new Elem;
    if(no == nullptr){
        cout << "Espaço de memória não alocado para o nó!\n";
        return 0;
    }
    no->dados = *alunoN;
    no->prox = nullptr;
    if(fila->final == nullptr)//fila vazia
        fila->inicio = no;
    else
        fila->final->prox = no;
    fila->final = no;
    fila->qtd++;
    return 1;
}

int removerFila(Fila* fila){
     if(fila == nullptr){
        cout << "Fila não existe!\n";
        return 0;
    }
    if(fila->inicio == nullptr){//fila vazia
        cout << "Fila Vazia!\n";
        return 0;
    }
    Elem *no = fila->inicio;
    fila->inicio = fila->inicio->prox;
    if(fila->inicio == nullptr)//fila ficou vazia
        fila->final = nullptr;
    delete no;
    fila->qtd--;
    return 1;
}

int tamanhoFila(Fila* fila){
    if(fila == nullptr){
        cout << "Fila não existe!\n";
        return 0;
    }
    cout << fila->qtd << " cadastro(s) na fila!\n";
    return fila->qtd;
}

int FilaEhVazia(Fila* fila){
     if(fila == nullptr){
        cout << "Fila não existe!\n";
        return 0;
    }
    if(fila->inicio == nullptr){//fila vazia
        cout << "Fila Vazia!\n";
        return 1;
    }
}

int imprimirFila(Fila* fila){
    if(fila == nullptr){
        cout << "Fila não existe!\n";
        return 0;
    }
    if(fila->inicio == nullptr){//fila vazia
        cout << "Não há elementos na Fila!\n";
        return 0;
    }
    Elem* no = fila->inicio;
    while(no != nullptr){
        cout << "Nome:" << no->dados.nome<< "\n";
        cout << "Matricula: " << no->dados.matricula << "\n";
        cout <<"Nota: " <<no->dados.nota << "\n\n\n";
        no = no->prox;
    }
    return 1;
}

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
