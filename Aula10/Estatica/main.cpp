#include <iostream>
#include "pilhaEstatica.h"
#include<windows.h>

using namespace std;
char menuInicial();
char menuSaida();

int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    char menu;
    Pilha *pilha;
    Aluno alunoN;
    pilha = criarPilha();
    do{
        menu = menuInicial();
        switch(menu){
        case '1':
            if(pilha->qtd==MAX)
                cout<<"Pilha cheia, impossível inserir!\n";
            else{
                cadastrarAluno(&alunoN);
                inserirPilha(pilha,&alunoN);
            }
            break;
        case '2':
            removerPilha(pilha);
            break;
        case '3':
            exibirTopo(pilha);
            break;
        default:
            cout << "Opção Inválida!";
        }
        menu = menuSaida();
        system("cls");
    }while(menu!='S');
    apagarPilha(pilha);
   return 0;
}

char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir aluno na pilha\n"
            "2 - para remover um aluno da pilha\n"
            "3 - exibir o topo da pilha\n"
            "--> ";
    fflush(stdin);
    cin>>menu;
    return menu;
}

char menuSaida(){
    char menu;
    cout<<"\nDeseja sair do programa? S para sim "
            "e qualquer tecla para continuar...\n--> ";
    cin >> menu;
    menu = toupper(menu);
    return menu;
}
char menuInicial();
char menuSaida();
