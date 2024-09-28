#include <iostream>
#include <cmath> // Para a função pow()

using namespace std;

double calcular(double num1, double num2, char operador) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 == 0) {
                cout << "Erro: Divisão por zero" << endl;
                return 0;
            }
            return num1 / num2;
        case '^':
            return pow(num1, num2);
        default:
            cout << "Operador inválido" << endl;
            return 0;
    }
}

int main() {
    double num1, num2;
    char operador;

    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    cout << "Digite o operador (+, -, *, /, ^): ";
    cin >> operador;

    double resultado = calcular(num1, num2, operador);
    cout << "Resultado: " << resultado << endl;

    return 0;
}
