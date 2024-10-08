#include <iostream>
#include "header/operacao.h"

using namespace std;

int menu();

int main() {

 int opc;
    do{
        opc = menu();
        execOperation(opc);

    }while(opc != 5);
}

int menu(){
    int opc;
    cout << "Digite a operação desejada: " << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtração" << endl;
    cout << "3 - Multiplicação" << endl;
    cout << "4 - Divisão" << endl;
    cout << "5 - Sair" << endl;
    fflush(stdin);
    cin >> opc;

    return opc;
}
