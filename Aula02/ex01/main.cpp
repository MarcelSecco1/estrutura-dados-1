#include <iostream>

using namespace std;

int somar(int a, int b){
    return a + b;
}

int main()
{
    int a, b, resultado = 0;
    int *ptrResultado;

    cout << "Informe o primeiro número: ";
    cin >> a;

    cout << "Informe o segundo número: ";
    cin >> b;

    resultado = somar(a,b);

    ptrResultado = &resultado;

    cout << "O seu resultado é: " << *ptrResultado << endl;
    cout << "O seu endereço de memória é: " << ptrResultado << endl;

    return 0;
}
