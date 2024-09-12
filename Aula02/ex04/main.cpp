#include <iostream>
#define NUMBER 4

using namespace std;

void preencherVetor(double *ptrVetor);
void atualizaVetor(double *ptrVetor);
void imprimirVetor(double *ptrVetor);

int main()
{
    double vetor[NUMBER];
    preencherVetor(vetor);
    atualizaVetor(vetor);
    imprimirVetor(vetor);
    return 0;
}

void preencherVetor(double *ptrVetor)
{

    for(int i=0; i<NUMBER; i++){
        do{
            cout << "Informe o valor " << i+1 << " do vetor: ";
            cin >> ptrVetor[i];
        }while(ptrVetor[i] < 0 || ptrVetor[i] > 10);
    }
}

void atualizaVetor(double *ptrVetor)
{
    for(int i=0; i < NUMBER; i++){
        if(ptrVetor[i] < 6 && ptrVetor[i] >=4){
            cout << "O aluno " << i+1 << " está de recuperação. \n";
            do{
                double temp = ptrVetor[i];
                cout << "Informe a nota da sua recuperação: ";
                cin >> ptrVetor[i];

                if(temp > ptrVetor[i] || ptrVetor[i] < 6){
                    cout << "O aluno " << i+1 << " está REPROVADO. \n";
                }
                if(ptrVetor[i] >= 6){
                    cout << "O aluno " << i+1 << " está APROVADO. \n";
                }


            }while(ptrVetor[i] < 0 || ptrVetor[i] > 10);
        }

        if(ptrVetor[i] >= 0 && ptrVetor[i] < 4){
            cout << "O aluno " << i+1 << " está REPROVADO. \n";
        }

        if(ptrVetor[i] >= 6 && ptrVetor[i] <= 10){
            cout << "O aluno " << i+1 << " está APROVADO. \n";
        }
    }
}

void imprimirVetor(double *ptrVetor)
{
    for(int i=0; i < NUMBER; i++){
        cout << "O número na posição " << i+1 << " é: " << ptrVetor[i] << endl;
    }
}
