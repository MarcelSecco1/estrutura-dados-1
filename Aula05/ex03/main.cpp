#include <iostream>
#include <string>

using namespace std;

struct Funcionario
{
    int anoInicial;
    string nome, cargo;
    double salario;
};


int main(){

    Funcionario* funcionario = new Funcionario[1];

    cout << "Informe o nome: ";
    getline(cin, funcionario->nome);

    cout << "Informe o cargo: ";
    getline(cin, funcionario->cargo);

    do{
        cout << "Informe o ano de início: ";
        cin >> funcionario->anoInicial;
    }while(funcionario->anoInicial > 2024 || funcionario->anoInicial < 1900);

    do{
        cout << "Informe o salário: ";
        cin >> funcionario->salario;
    }while(funcionario->salario <= 0);

    cout << "======EXIBINDO INFO======\n";
    cout << "Nome: " << funcionario->nome << endl;
    cout << "Cargo: " << funcionario->cargo << endl;
    cout << "Ano de início: " << funcionario->anoInicial << endl;
    cout << "Salário: " << funcionario->salario << endl;


    delete[] funcionario;
    return 0;
}
