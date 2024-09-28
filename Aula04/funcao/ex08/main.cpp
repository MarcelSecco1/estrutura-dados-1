#include <iostream>

using namespace std;

void avaliarConsumo(double distancia, double litros) {
    double consumo = distancia / litros;

    if (consumo < 8) {
        cout << "Venda o carro!" << endl;
        return;
    }
    if (consumo >= 8 && consumo <= 14) {
        cout << "Econômico!" << endl;
        return;
    }
    if (consumo > 14) {
        cout << "Super econômico!" << endl;
        return;
    }
}

int main() {
    double distancia, litros;

    cout << "Digite a distância percorrida (Km): ";
    cin >> distancia;
    cout << "Digite a quantidade de litros consumidos: ";
    cin >> litros;

    avaliarConsumo(distancia, litros);

    return 0;
}
