#include <iostream>

//Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de retorno
//será 1 se positivo, -1 se negativo e 0 se for igual a 0.

using namespace std;

int verifyNumber(double number);

int main()
{
    double number;
    int result;

    cout << "======Verifica número negativo======" << endl;

    cout << "Informe um número: ";
    cin >> number;

    result = verifyNumber(number);

    if(result == 0){
        cout << "Seu número é 0, portanto não é negativo nem positivo." << endl;
    }

    if(result == 1){
        cout << "Seu número é positivo!" << endl;
    }

    if(result == -1){
        cout << "Seu número é negativo!" << endl;
    }

    return 0;
}

int verifyNumber(double number){
    if(number == 0){
        return 0;
    }

    if(number > 0){
        return 1;
    }

    if(number < 0){
        return -1;
    }
}
