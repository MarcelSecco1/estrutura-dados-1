#include <iostream>

using namespace std;

int tripleNumber(int number);

int main()
{
    int n;

    do{
        cout << "Informe um número para continuar: ";
        cin >> n;

        if(n < 0){
            cout << "Informe um número maior que 0 \n";
        }

    }while(n < 0);

    cout << "O triplo do seu número é: " << tripleNumber(n) << endl;

    return 0;
}

int tripleNumber(int number){
    return number * 3;
}
