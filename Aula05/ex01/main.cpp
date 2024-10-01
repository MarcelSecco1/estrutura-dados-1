#include <iostream>

using namespace std;

int main()
{
    int qtd;
    do
    {
        cout << "Informe o número de elementos do vetor(1-10): ";
        cin >> qtd;
    } while (qtd < 1);

    int *ptr1 = new int[qtd];
    int *ptr2 = new int[qtd];

    cout << endl;

    for (int i = 0; i < qtd; i++)
    {
        do
        {
            cout << "Informe o valor do primeiro vetor, elemento " << i << ": ";
            cin >> ptr1[i];
        } while (ptr1[i] < 1 || ptr1[i] > 10);
    }

    cout << endl;

    for (int i = 0; i < qtd; i++)
    {
        do
        {
            cout << "Informe o valor do segundo vetor, elemento " << i << ": ";
            cin >> ptr2[i];
        } while (ptr2[i] < 1 || ptr2[i] > 10);
    }

    cout << "\nA soma dos seus vetores é: \n";

    for (int i = 0; i < qtd; i++)
    {
        cout << "Elemento " << i << ": " << ptr1[i] + ptr2[i] << "\n";
    }

    delete[] ptr1;
    delete[] ptr2;
}
