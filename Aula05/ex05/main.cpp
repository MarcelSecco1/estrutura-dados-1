#include <iostream>
#include <string>

using namespace std;

struct Funcionario
{
    int anoInicial;
    string nome, cargo;
    double salario;
};

void cadastrarFuncionario(Funcionario* funcionario, int qtd);
void exibeCadastro(Funcionario* funcionario, int qtd);
void exibeMaior(Funcionario* funcionario, int qtd);

int main(){
    const int QUANTIDADE = 5;

    double *salarioMaior();

    Funcionario* funcionario = new Funcionario[QUANTIDADE];

    cadastrarFuncionario(funcionario, QUANTIDADE);
    exibeCadastro(funcionario, QUANTIDADE);

    exibeMaior(funcionario, QUANTIDADE);
    delete[] funcionario;

    return 0;
}


void cadastrarFuncionario(Funcionario* funcionario, int qtd){

    for (int i = 0; i < qtd; i++)
    {
        cout << "======CADASTRANDO "<< i <<"======\n";

        cout << "Informe o nome: ";
        getline(cin, funcionario[i].nome);

        cout << "Informe o cargo: ";
        getline(cin, funcionario[i].cargo);

        do {
            cout << "Informe o ano de início: ";
            cin >> funcionario[i].anoInicial;
        } while (funcionario[i].anoInicial > 2024 || funcionario[i].anoInicial < 1900);

        do {
            cout << "Informe o salário: ";
            cin >> funcionario[i].salario;
        } while (funcionario[i].salario <= 0);

        cin.ignore();
    }
}

void exibeCadastro(Funcionario* funcionario, int qtd){
        cout << "======EXIBINDO INFO======\n";

    for (int i = 0; i < qtd; i++)
    {
        cout << "Nome: " << funcionario[i].nome << endl;
        cout << "Cargo: " << funcionario[i].cargo << endl;
        cout << "Ano de início: " << funcionario[i].anoInicial << endl;
        cout << "Salário: " << funcionario[i].salario << endl;
    }
}

void exibeMaior(Funcionario* funcionario, int qtd)
{
    double maior = 0.00;
    string nome;

    for (int i = 0; i < qtd; i++)
    {
        if(funcionario[i].salario > maior){
            maior = funcionario[i].salario;
            nome = funcionario[i].nome;
        }
    }

    cout << "======MAIOR SALÁRIO======\n";
    cout << "Nome: " << nome << endl;
    cout << "Salário: " << maior << endl;
}