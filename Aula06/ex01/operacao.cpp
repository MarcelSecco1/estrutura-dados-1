#include <iostream>

using namespace std;

void sair();

double soma(double a, double b){
    return a + b;
}

double subtracao(double a, double b){
    return a - b;
}

double multiplicacao(double a, double b){
    return a * b;
}

double divisao(double a, double b){
    return a / b;
}

void recebeNumeros(double *a, double *b){
    cout << "Digite os dois números: ";
    cin >> *a >> *b;

    return;
}

void recebeNumerosDivisao(double *a, double *b){
    cout << "Digite os dois números: ";
    cin >> *a >> *b;

    while(*b == 0){
        cout << "Divisão por zero não é permitida. Digite outro número para b: ";
        cin >> *b;
    }

    return;
}

void execOperation(int opc){
    system("clear");
    
    double num1, num2;
     switch (opc)
        {
        case 1:
            recebeNumeros(&num1, &num2);
            cout << "A soma dos números é: " << soma(num1, num2) << endl;
            break;
        case 2:
            recebeNumeros(&num1, &num2);
            cout << "A subtração dos números é: " << subtracao(num1, num2) << endl;
            break;
        case 3:
            recebeNumeros(&num1, &num2);
            cout << "A multiplicação dos números é: " << multiplicacao(num1, num2) << endl;
            break;
        case 4:
            recebeNumerosDivisao(&num1, &num2);
            cout << "A divisão dos números é: " << divisao(num1, num2) << endl;
            break;
        case 5:
            cout << "Saindo..." << endl;
            sair();
            break;

        default:
            cout << "Opção inválida" << endl;
            break;
        }

         cout << "\n=====================================" << endl;

}

void sair(){
    exit(0);
}
