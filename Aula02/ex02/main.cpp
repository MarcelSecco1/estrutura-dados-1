#include <iostream>

using namespace std;

int main()
{
    double nota, *ptrNota;
    string nome, curso, *ptrNome;

    cout << "Informe o seu nome: ";
    getline(cin, nome);

    ptrNome = &nome;

    cout << "Informe seu curso: ";
    getline(cin, curso);

    do{
        cout << "Informe sua nota: ";
        cin >> nota;
    }while(nota < 0 || nota > 100);

    ptrNota = &nota;

    if(*ptrNota < 60){
        cout << "Olá " << *ptrNome << ", você foi REPROVADO. \n";
        cout << "Nota: " << *ptrNota;
        return 0;
    }

    cout << "Olá " << *ptrNome << ", você foi APROVADO. \n";
    cout << "Nota: " << *ptrNota;

    return 0;
}
