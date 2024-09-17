#include <iostream>
#include <string>

using namespace std;

void printDate(int day, int month, int year);

int main()
{
    int day, month, year;
    cout << "======= Programa exibe data =======" << endl;

    do
    {
        cout << "Informe um dia (1-31): ";
        cin >> day;
    }
    while(day < 1 || day > 31);

    do
    {
        cout << "Informe um mês: (1-12): ";
        cin >> month;
    }
    while(month < 1 || month > 12);

    do
    {
        cout << "Informe um ano: (1900-2024): ";
        cin >> year;
    }
    while(year < 1900 || year > 2024);

    printDate(day, month, year);

    return 0;
}

void printDate(int day, int month, int year)
{
    string monthString;

    switch(month)
    {
    case 1:
        monthString = "janeiro";
        break;
    case 2:
        monthString = "fevereiro";

        if(day > 28)
        {
            cout << "Essa data não existe..." << endl;
            return;
        }
        break;
    case 3:
        monthString = "março";
        break;
    case 4:
        monthString = "abril";
        break;
    case 5:
        monthString = "maio";
        break;
    case 6:
        monthString = "junho";
        break;
    case 7:
        monthString = "julho";
        break;
    case 8:
        monthString = "agosto";
        break;
    case 9:
        monthString = "setembro";
        break;
    case 10:
        monthString = "outubro";
        break;
    case 11:
        monthString = "novembro";
        break;
    case 12:
        monthString = "dezembro";
        break;
    default:
        cout << "Mês inválido...";
        return;
        break;
    }

    cout << day << " de " << monthString << " de " << year << endl;
    return;
}
