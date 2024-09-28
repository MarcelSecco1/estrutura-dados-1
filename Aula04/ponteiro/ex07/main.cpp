#include <iostream>
#include <cmath>

using namespace std;

void calcularRaizes(double a, double b, double c);

int main() {
    double a, b, c;

    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;

    calcularRaizes(a, b, c);

    return 0;
}

void calcularRaizes(double a, double b, double c) {
    if (a == 0) {
        cout << "Não é uma equação do segundo grau." << endl;
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << "A equação não possui raízes reais." << endl;
    } else if (delta == 0) {
        double raiz = -b / (2 * a);
        cout << "A equação possui uma raiz real: " << raiz << endl;
    } else {
        double raiz1 = (-b + sqrt(delta)) / (2 * a);
        double raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << "A equação possui duas raízes reais: " << raiz1 << " e " << raiz2 << endl;
    }
}
