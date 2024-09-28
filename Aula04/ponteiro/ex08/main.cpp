#include <iostream>
#include <cmath> // Para a função pow()
#define PI 3.141592653589793 // Definição de PI

using namespace std;

void calcularAreaVolume(double R, double &area, double &volume);

int main() {
    double raio, area, volume;

    cout << "Digite o valor do raio da esfera: ";
    cin >> raio;

    calcularAreaVolume(raio, area, volume);

    cout << "Área da superfície da esfera: " << area << endl;
    cout << "Volume da esfera: " << volume << endl;

    return 0;
}

void calcularAreaVolume(double R, double &area, double &volume) {
    area = 4 * PI * pow(R, 2);

    volume = (4.0 / 3.0) * PI * pow(R, 3);
}
