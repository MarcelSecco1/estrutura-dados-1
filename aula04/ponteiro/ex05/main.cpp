#include <iostream>

using namespace std;

int calculate(int* ptrA, int* ptrB);

int main()
{
    int a, b;

    cout << "=====Soma do Triplo======" << endl;

    cout << "Informe o valor de A: ";
    cin >> a;

    cout << "Informe o valor de B: ";
    cin >> b;

    cout << "Resultado: " << calculate(&a, &b) << endl;

    return 0;
}

int calculate(int* ptrA, int* ptrB){
    int triplo1 = *ptrA * 3;
    int triplo2 = *ptrB * 3;

    return triplo1 + triplo2;
}
