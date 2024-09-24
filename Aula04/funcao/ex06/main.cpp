#include <iostream>
#include <cmath>
//Sejam a e b dois valores válidos para o cálculo da seguinte equação: x = √ (a 2 + b 2)/a. Faça uma
//função que receba os valores de a e b e calcule o valor de x.

using namespace std;

void calculeFunction(double a, double b);

int main()
{
    double a, b;
    cout << "=====Equação=====" << endl;

    do
    {
        cout << "Informe A, sendo um número: ";
        cin >> a;
    }
    while(a <=0);

    do
    {
        cout << "Informe B, sendo um número: ";
        cin >> b;
    }
    while(b <=0);

    calculeFunction(a, b);

    return 0;
}


void calculeFunction(double a, double b)
{
    double quadradoA = pow(a, 2);
    double quadradoB = pow(b, 2);

    double nextStep = (quadradoA + quadradoB) / a;

    double raiz = sqrt(nextStep);

    cout << "Seu resultado é: " << raiz << endl;

}
