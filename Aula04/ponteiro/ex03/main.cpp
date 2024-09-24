#include <iostream>

using namespace std;

void tradeValues(int *ptrA, int *ptrB);

int main()
{
    int a, b, *ptrA, *ptrB;

    cout << "======Troca de Valores======" << endl;

    cout << "Informe o valor de A: ";
    cin >> a;

    cout << "Informe o valor de B: ";
    cin >> b;

    cout << "Valor de A, ANTES: " << a << endl;
    cout << "Valor de B, ANTES: " << b << endl;

    tradeValues(&a, &b);

    cout << "Valor de A, DEPOIS: " << a << endl;
    cout << "Valor de B, DEPOIS: " << b << endl;

    return 0;
}

void tradeValues(int *ptrA, int *ptrB)
{
    *ptrA = 10;
    *ptrB = 20;
}
