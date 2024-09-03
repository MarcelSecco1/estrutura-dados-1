#include <iostream>
#include <cstring>

using namespace std;


void imprimirOpcao();
void multiplicacao();
void adicao();
void divisao();



int main()
{
    char opcao;

    do
    {
        imprimirOpcao();

        cout << "Informe a opção desejada:";
        fflush(stdin);
        cin >> opcao;

        opcao = toupper(opcao);

        switch(opcao){
            case 'A':
                adicao();
                break;
            case 'B':
                multiplicacao();
                break;
            case 'C':
                divisao();
                break;
            case 'S':
                cout << "Saindo...." << endl;
                break;
            default:
                cout << "Opção Inválida!!" << endl;
                break;
        }


    }while(opcao != 'S');

}


void imprimirOpcao(){
    cout << "==============================\n";
    cout << "A - SOMA \n";
    cout << "B - MULTIPLICAÇÃo \n";
    cout << "C - DIVISÃO\n";
    cout << "S - SAIR\n";
    cout << "==============================\n";

    return;
}

void adicao()
{
    int n1, n2;

    cout << "Informe o número 1: ";
    cin >> n1;

    cout << "Informe o número 2: ";
    cin >> n2;

    cout << "O resultado é: " << n1 + n2 << endl;

    return;
}

void multiplicacao()
{
    int n1, n2, n3;

    cout << "Informe o número 1: ";
    cin >> n1;

    cout << "Informe o número 2: ";
    cin >> n2;

    cout << "Informe o número 3: ";
    cin >> n2;

    cout << "O resultado é: " << n1 * n2 * n3 << endl;

    return;
}

void divisao()
{
    int n1, n2;

    cout << "Informe o número 1: ";
    cin >> n1;

    do{
        cout << "Informe o número 2: ";
        cin >> n2;
    }while(n2 <= 0);

    cout << "O resultado é: " << n1 / n2 << endl;

    return;
}