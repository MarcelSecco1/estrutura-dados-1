#include <iostream>

//Faça uma função que receba 3 números inteiros como parâmetro, representando horas, minutos
//e segundos, e os converta em segundos.
using namespace std;

int calcSeconds(int hours, int minutes, int seconds);

int main()
{
    int hours, minutes, seconds;

    cout << "=====Calcula Segundos=====" << endl;

    do
    {
        cout << "Informe a quantia de HORAS: ";
        cin >> hours;
    }
    while(hours < 0);

    do
    {
        cout << "Informe a quantia de MINUTOS: ";
        cin >> minutes;
    }
    while(minutes < 0 || minutes > 59);

    do
    {
        cout << "Informe a quantia de SEGUNDOS: ";
        cin >> seconds;
    }
    while(seconds < 0 || seconds > 59);

    cout << "Seu total de segundos é: " << calcSeconds(hours, minutes, seconds) << endl;

    return 0;
}

int calcSeconds(int hours, int minutes, int seconds)
{
    int minutesSeconds = minutes * 60;
    int hoursSeconds = hours * 60 * 60;

    return hoursSeconds + minutesSeconds + seconds;
}
