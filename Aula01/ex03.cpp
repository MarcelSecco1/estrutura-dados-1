#include <iostream>

using namespace std;

int main()
{
    int matriz[4][4];

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << "Informe um número para linha " << i << " e coluna " << c << ": ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nSua diagonal principal: \n";

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(i == j)
            {
                cout << matriz[i][j] << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << "\nOs valores da sua matriz: \n";

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
   }

}