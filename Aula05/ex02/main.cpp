#include <iostream>

using namespace std;

void manipulaVetor(int *ptr, int qtd);
void exibeSoma(int *ptr, int qtd);
void soma(int *ptr1, int *ptr2, int qtd, int *ptr3);

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
    int *ptr3 = new int[qtd];

    cout << endl;

    manipulaVetor(ptr1, qtd);

    cout << endl;

    manipulaVetor(ptr2, qtd);

    soma(ptr1, ptr2, qtd, ptr3);

    exibeSoma(ptr3, qtd);

    delete[] ptr1;
    delete[] ptr2;
    delete[] ptr3;
}

void manipulaVetor(int *ptr, int qtd)
{

    for (int i = 0; i < qtd; i++)
    {
        do
        {
            cout << "Informe o valor do vetor, elemento " << i << ": ";
            cin >> ptr[i];
        } while (ptr[i] < 1 || ptr[i] > 10);
    }

    return;
}

void exibeSoma(int *ptr, int qtd)
{
    cout << "\nA soma dos seus vetores é: \n";
    for (int i = 0; i < qtd; i++)
    {
        cout << "Elemento " << i << ": " << ptr[i] << "\n";
    }
}

void soma(int *ptr1, int *ptr2, int qtd, int *ptr3)
{

    for (int i = 0; i < qtd; i++)
    {
        ptr3[i] = ptr1[i] + ptr2[i];
    }
    return;
}
