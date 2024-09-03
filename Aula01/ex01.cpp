#include <iostream>

using namespace std;

int main()
{
    int vetor[10];
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Informe o valor " << i << " do vetor: " << endl;
        cin >> vetor[i];

        if (vetor[i] <= 0)
        {
            cout << "Erro, foi informado um número negativo.";
            return 0;
        }

        soma += vetor[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "Valor " << i << " do vetor: " vetor[i] << endl;

    }

    cout << "O resultado da sua some é: " << soma;
}