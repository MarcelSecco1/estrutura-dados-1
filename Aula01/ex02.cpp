#include <iostream>
#define DIVISIVEL 2
#define DIVISIVEL2 7

using namespace std;

int main()
{
   int vetor[15];
   int vetorDivisivel[15];
   int quant = 0;

   for(int i = 0; i < 15; i++)
   {
        cout << "Informe o valor " << i << " do vetor: ";
        cin >> vetor[i];

        if(vetor[i] % DIVISIVEL == 0 && vetor[i] % DIVISIVEL2 == 0)
        {
            vetorDivisivel[quant] = vetor[i];
            quant++;
        }
   }
   
    cout << "Foram informados " << quant << " números diviveis por 2 ou 7. \n";
    cout << "Sendo: ";

    for(int i = 0; i < quant; i++)
    {
       cout << vetorDivisivel[i] << " ";

    }

   
}