#include <iostream>
#include <string>
#define ANIMAL_QUANTITY 5

using namespace std;

int main()
{
    int idadeMaior = 0;
    string nomeDonoMaior, nomePetMaior;

    struct structAnimal{
        string nome, especie, raca, sexo, nomeDono, rg, telefone;
        int idade;
    } vAnimal[ANIMAL_QUANTITY];

    for(int i = 0; i < ANIMAL_QUANTITY; i++)
    {
        cout << "Informe o nome do PET: ";
        fflush(stdin);
        getline(cin, vAnimal[i].nome);

        cout << "Informe a espécie do PET: ";
        fflush(stdin);
        getline(cin, vAnimal[i].especie);

        cout << "Informe a raça do PET: ";
        fflush(stdin);
        getline(cin, vAnimal[i].raca);

        cout << "Informe o sexo do PET: ";
        fflush(stdin);
        getline(cin, vAnimal[i].sexo);

        do
        {
            cout << "Informe a idade do PET: ";
            cin >> vAnimal[i].idade;
        }
        while(vAnimal[i].idade < 0 || vAnimal[i].idade > 100);

        if(vAnimal[i].idade >= idadeMaior)
        {
            idadeMaior = vAnimal[i].idade;
            nomeDonoMaior = vAnimal[i].nomeDono;
            nomePetMaior = vAnimal[i].nome;
        }


        cout << "Informe o nome do DONO: ";
        fflush(stdin);
        getline(cin, vAnimal[i].nomeDono);

        cout << "Informe o RG do DONO: ";
        fflush(stdin);
        getline(cin, vAnimal[i].rg);

        cout << "Informe o telefone do DONO: ";
        fflush(stdin);
        getline(cin, vAnimal[i].telefone);

    }


    for(int i = 0; i < ANIMAL_QUANTITY; i++)
    {
        cout << "=============PET" << i+1 << "=============\n";
        cout << "Nome: " << vAnimal[i].nome << endl;
        cout << "Espécie: " << vAnimal[i].especie << endl;
        cout << "Raça: " << vAnimal[i].raca << endl;
        cout << "Sexo: " << vAnimal[i].sexo << endl;
        cout << "Idade: " << vAnimal[i].idade << endl;
        cout << "=============DONO=============\n";
        cout << "Nome: " << vAnimal[i].nomeDono << endl;
        cout << "RG: " << vAnimal[i].rg << endl;
        cout << "Telefone: " << vAnimal[i].telefone << endl;
        cout << "==============================\n";
    }

    cout << "=============MAIS VELHO=============\n";
    cout << "Nome do PET: " << vAnimal[i].nome << endl;
    cout << "Idade do PET: " << vAnimal[i].idade << endl;
    cout << "Nome do DONO: " << vAnimal[i].nomeDono << endl;

}