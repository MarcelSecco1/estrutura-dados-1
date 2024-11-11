#include <iostream>
#include "header/listaDinamica.h"
#include <string>
using namespace std;

void cadastrarAluno(Aluno *alunoN){
    cout<<"Informe o nome do aluno: ";
    fflush(stdin);
    cin.getline(alunoN->nome, sizeof(alunoN->nome));
    cout<<"Informe a matr�cula do aluno: " ;
    cin >> alunoN->matricula;
    cout<<"Informe a nota do aluno!\n";
    cin >> alunoN->nota;
}

Lista* criarLista(){
    Lista *inicioLista = new Lista;
    if(inicioLista != nullptr)
        *inicioLista = nullptr;
    cout << "Lista Criada com sucesso!\n";
    return inicioLista;
}

void liberarLista(Lista* inicioLista){
    if(inicioLista != nullptr){
        No *no;
        while((*inicioLista) != nullptr){
            no = *inicioLista;
            *inicioLista = (*inicioLista)->prox;
            delete no;
        }
        delete inicioLista;
    }
}

void retornoOperacao(int x){
    if(x==0)
        cout << "Opera��o n�o foi realizada!";
    else
        cout << "Opera��o realizada com sucesso!";
}

int inserirFinal(Lista* inicioLista, Aluno *alunoN){
    if(inicioLista == nullptr)
        return 0;

    No *no = new No;
    if(no == nullptr)
        return 0;

    no->dadosAl = *alunoN;
    no->prox = nullptr;

    if((*inicioLista) == nullptr){//lista vazia: insere in�cio
        *inicioLista = no;
        return 1;
    }

    No *aux;
    aux = *inicioLista;
    while(aux->prox != nullptr){
       aux = aux->prox;
    }
    aux->prox = no;
    return 1;
}

int inserirInicio(Lista* inicioLista, Aluno *alunoN){
    if(inicioLista == nullptr)
        return 0;

    No* no = new No;

    if(no == nullptr)
        return 0;

    no->dadosAl = *alunoN;
    no->prox = (*inicioLista);
    *inicioLista = no;
    return 1;
}

int inserirItem(Lista* inicioLista, Aluno *alunoN){
    if(inicioLista == nullptr)
        return 0;

    No *no = new No;
    if(no == nullptr)
        return 0;

    no->dadosAl = *alunoN;

    if((*inicioLista) == nullptr){//lista vazia: insere in�cio
        no->prox = nullptr;
        *inicioLista = no;
        return 1;
    }

    No *ant, *atual;
    atual = *inicioLista;
    while(atual != nullptr && atual->dadosAl.matricula < alunoN->matricula){
        ant = atual;
        atual = atual->prox;
    }

    if(atual == *inicioLista){//insere in�cio
        no->prox = (*inicioLista);
        *inicioLista = no;
        return 1;
    }
    no->prox = atual;
    ant->prox = no;

    return 1;

}

void imprimirLista(Lista *inicioLista){
   No *listaCpy = *inicioLista;
   if(listaCpy==nullptr)
     cout << "N�o h� dados cadastrados na lista!\n";
   else{
        while(listaCpy!=nullptr) {
            cout<< "\nNome: " << listaCpy->dadosAl.nome;
            cout<< "\nMatr�cula: " << listaCpy->dadosAl.matricula;
            cout<< "\nNota: " << listaCpy->dadosAl.nota << endl;
            listaCpy = listaCpy->prox;
        }
    }
}

int removerInicio(Lista* inicioLista){
    if(inicioLista == nullptr)
        return 0;
    if((*inicioLista) == nullptr)//lista vazia
        return 0;

    No *no = *inicioLista;
    *inicioLista = no->prox;

    delete no;
    return 1;
}

int removerFinal(Lista* inicioLista){
    if(inicioLista == nullptr)
        return 0;
    if((*inicioLista) == nullptr)//lista vazia
        return 0;

    No *ant, *no = *inicioLista;
    while(no->prox != nullptr){
        ant = no;
        no = no->prox;
    }

    if(no == (*inicioLista))
        *inicioLista = no->prox;
    else
        ant->prox = no->prox;

    delete no;
    return 1;
}

int removerItem(Lista* inicioLista, int matA){
    if(inicioLista == nullptr)
        return 0;
    if((*inicioLista) == nullptr)//lista vazia
        return 0;

    No *ant, *no = *inicioLista;
    while(no != nullptr && no->dadosAl.matricula != matA){
        ant = no;
        no = no->prox;
    }
    if(no == nullptr)//n�o encontrado
        return 0;

    if(no == *inicioLista)
        *inicioLista = no->prox;
    else
        ant->prox = no->prox;

    delete no;
    return 1;
}


int consultarPosicao(Lista* inicioLista, int pos){ 
    if(inicioLista == nullptr || pos <= 0)
        return 0;
    No *no = *inicioLista;
    int i = 1;
    while(no != nullptr && i < pos){
        no = no->prox;
        i++;
    }
    if(no == nullptr)
        return 0;
    else{
        cout<<"\nDados do aluno na posi��o "<< pos;
        cout<< "\nNome: " << no->dadosAl.nome;
        cout<< "\nMatr�cula: " << no->dadosAl.matricula;
        cout<< "\nNota: " << no->dadosAl.nota << endl;
        return 1;
    }
}

int consultarMatricula(Lista* inicioLista, int mat){
    if(inicioLista == nullptr)
        return 0;
    No *no = *inicioLista;
    while(no != nullptr && no->dadosAl.matricula != mat){
        no = no->prox;
    }
    if(no == nullptr)
        return 0;
    else{
        cout<<"\nDados do aluno de matr�cula "<< mat;
        cout<< "\nNome: " << no->dadosAl.nome;
        cout<< "\nMatr�cula: " << no->dadosAl.matricula;
        cout<< "\nNota: " << no->dadosAl.nota << endl;
        return 1;
    }
}
