#include <iostream>

using namespace std;

int main()
{
    const int tamanho = 6;
    int vetor[tamanho];
    int *ptr = vetor;

    for (int i = 0; i < tamanho; i++)
    {
        cout << "Digite o números " << i + 1 << " sendo um inteiro: ";
        cin >> *(ptr + i);
    }

    cout << "Valores do vetor:" << endl;
    for (int i = 0; i < tamanho; i++)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
