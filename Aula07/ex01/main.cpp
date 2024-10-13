#include <iostream>
#include "header/functions.h"

using namespace std;

int main()
{
    double *raio = new double;
    double *area = new double;
    double *volume = new double;
    int *opc = new int;

    receberRaio(*raio);
    do
    {
        menu(*opc);

        switch (*opc)
        {
        case 1:
            calcularArea(*raio, *area);
            break;
        case 2:
            calcularVolume(*raio, *volume);
            break;
        case 3:
            exibirRaio(*raio);
            break;
        case 4:
            cout << "Saindo..." << endl;
            break;
        default:
            cout << "Opção inválida!" << endl;
            break;
        }

    } while (*opc != 4);

    delete raio;
    delete area;
    delete volume;
    delete opc;
}
