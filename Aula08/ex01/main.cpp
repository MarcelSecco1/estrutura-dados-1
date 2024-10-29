#include <iostream>
#include "header/functions.h"
// #include <windows.h>

using namespace std;

char menuInicial();
char menuSaida();
void retornoOperacao(int x);

int main(){
    // SetConsoleCP(1252);
    // SetConsoleOutputCP(1252);

    char menu;
    int x, matA;
    ListaAlunos lista;
    Aluno alunoN;

    lista = criarLista();

    do{
        menu = menuInicial();
        switch(menu){
        case '1':
            adicionarAluno(&alunoN);
            x = inserirAlunoFim(&lista, alunoN);
            retornoOperacao(x);
            break;
        case '2':
            adicionarAluno(&alunoN);
            x = inserirAlunoInicio(&lista,alunoN);
            retornoOperacao(x);
            break;
        case '3':
            adicionarAluno(&alunoN);
            x = inserirAlunoOrdenado(&lista,alunoN);
            retornoOperacao(x);
            break;
        case '4':
            x = removerFinal(&lista);
            retornoOperacao(x);
            break;
        case '5':
            x = removerAlunoInicio(&lista);
            retornoOperacao(x);
            break;
        case '6':
            cout << "Informe a matricula do aluno a ser removido!";
            cin >> matA;
            x = removerPorMatricula(&lista, matA);
            retornoOperacao(x);
            break;
        case '7':
            exibirLista(lista);
            break;
        default:
            cout << "Opção Inválida!";
        }
        menu = menuSaida();
        system("cls");
    }while(menu != 'S');

    apagarLista(&lista);

   return 0;
}

char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir aluno no final da lista\n"
            "2 - para inserir aluno no início da lista\n"
            "3 - para inserir aluno de forma ordenada na lista\n"
            "4 - para remover um aluno do início da lista\n"
            "5 - para remover um aluno do final da lista\n"
            "6 - para remover aluno um aluno determinado\n"
            "7 - exibir os alunos cadastrados\n"
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

void retornoOperacao(int x){
    if(x==1)
        cout << "Operação realizada com sucesso!\n";
    else
         cout << "Operação não realizada!\n";
}
