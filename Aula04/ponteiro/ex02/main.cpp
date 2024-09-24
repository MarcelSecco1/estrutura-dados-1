#include <iostream>

//Escreva um programa que contenha duas variáveis reais. Compare seus endereços e exiba o
//maior endereço. Exiba os valores das variáveis também.

using namespace std;

int main()
{
    double number1, number2, *ptrNumber1, *ptrNumber2;

    ptrNumber1 = &number1;
    ptrNumber2 = &number2;

    cout << "======Comparar Endereço======" << endl;

    cout << "Informe o número 1: ";
    cin >> number1;

    cout << "Informe o número 2: ";
    cin >> number2;

    cout << "Ponteiro 1: " << ptrNumber1 << endl;
    cout << "Ponteiro 2: " << ptrNumber2 << endl;

    if(ptrNumber1 > ptrNumber2){

        cout << "O ponteiro maior é o 1: " << ptrNumber1 << endl;
        cout << "Seu valor: " << *ptrNumber1;
    }else{
        cout << "O ponteiro maior é o 2: " << ptrNumber2 << endl;
        cout << "Seu valor: " << *ptrNumber2;
    }

    return 0;
}
