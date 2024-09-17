#include <iostream>
#include <cmath>
//Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo que o
//raio é passado por parâmetro. Fórmula: V = 4/3 ∗ π ∗ R3

using namespace std;

double calculeEsfer(double raio);

int main()
{
    double raio;

    cout << "======Calcula Esfera======" << endl;

    do
    {
        cout << "Informe o raio: ";
        cin >> raio;
    }
    while(raio <=0);


    cout << "O seu resultado é: " << calculeEsfer(raio) << endl;

    return 0;
}

double calculeEsfer(double raio)
{

    return ((4.0/3.0) * M_PI * (pow(raio, 3)));
}
