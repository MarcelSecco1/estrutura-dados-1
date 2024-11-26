#include <iostream>
#include <windows.h>
#include "FilaDinamica.h"

using namespace std;
char menuInicial();
char menuSaida();

int main(){
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    Aluno alunoN;
    char menu;
    int x, tam;
    Fila* fila = criarFila();
    do{
        menu=menuInicial();
        switch(menu){
        case '1':
            cadastrarAluno(&alunoN);
            x=inserirFila (fila, &alunoN);
            break;
        case '2':
            x=removerFila(fila);
            break;
       case '3':
           imprimirFila(fila);
            break;
        case '4': consultarFila(fila,&alunoN);
            break;
        case '5': tam = tamanhoFila(fila);
            break;
        default: cout<< "Op��o inv�lida!";
        }
        menu = menuSaida();
        system("clear||cls");
    }while(menu!='S');
    liberarFila(fila);
    return 0;
}
char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir aluno na fila\n"
            "2 - para remover um aluno da fila\n"
            "3 - exibir os alunos cadastrados\n"
            "4 - consultar primeiro aluno.\n"
            "5 - consultar n�mero de aluno cadastrado.\n"
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
