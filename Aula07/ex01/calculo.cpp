#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void menu(int &opc)
{
    cout << "1 - Calcular área" << endl;
    cout << "2 - Calcular volume" << endl;
    cout << "3 - Exibir raio" << endl;
    cout << "4 - Sair" << endl;
    cout << "Digite a opção desejada: ";
    cin >> opc;
}

void receberRaio(double &raio)
{
    system("clear");
    cout << "Digite o raio: ";
    cin >> raio;
}

void calcularArea(double &raio, double &area)
{
    system("clear");
    area = 4 * M_PI * raio * raio;
    cout << "Área: " << area << endl;
}

void calcularVolume(double &raio, double &volume)
{
    system("clear");
    volume = (4 * M_PI * raio * raio * raio) / 3;
    cout << "Volume: " << volume << endl;
}

void exibirRaio(double &raio)
{
    system("clear");
    cout << "Raio: " << raio << endl;
}
