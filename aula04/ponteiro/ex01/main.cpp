#include <iostream>

using namespace std;

int main()
{
    int number, *ptrNumber;
    double number2, *ptrNumber2;
    char caracter, *ptrCaracter;

    ptrNumber = &number;
    ptrNumber2 = &number2;
    ptrCaracter = &caracter;

    cout << "======Introdução Ponteiro======" << endl;

    cout << "Informe um número inteiro: ";
    cin >> number;

    cout << "Informe um número decimal: ";
    cin >> number2;


    cout << "Informe um char: ";
    cin >> caracter;

    cout << "Seus valores: \n";
    cout << *ptrNumber << endl;
    cout << *ptrNumber2 << endl;
    cout << *ptrCaracter << endl;


    cout << "Seus valores alterados: \n";

    *ptrNumber = 4;
    *ptrNumber2 = 4.0;
    *ptrCaracter = 'C';

    cout << number << endl;
    cout << number2 << endl;
    cout << caracter << endl;


    return 0;
}
