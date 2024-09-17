#include <iostream>

//Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores
//de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
//Escreva o conteúdo das 2 variáveis na tela.

using namespace std;

void verifyValues(int* ptrA, int* ptrB);

int main()
{
    int a, b;

    cout << "======Compara Valores======" << endl;

    cout << "Informe o valor de A: ";
    cin >> a;

    cout << "Informe o valor de B: ";
    cin >> b;

    verifyValues(&a, &b);

    cout << "A: " << a << endl;
    cout << "B: " << b;

    return 0;
}

void verifyValues(int *ptrA, int *ptrB)
{
    int maior;

    if(*ptrA < *ptrB)
    {
        maior = *ptrB;
        *ptrB = *ptrA;
        *ptrA = maior;
    }

    return;
}
