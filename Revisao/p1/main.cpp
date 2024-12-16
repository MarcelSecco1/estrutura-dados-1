#include <listas.h>
#include <listaDinamica.h>
#include <listaDuplamente.h>
#include <listaEstatica.h>

using namespace std;

void menu();
void menuListaDinamica();
void menuListaDuplamente();
void menuListaEstatica();

int main()
{
    int opcao;
    do
    {
        menu();
        cin >> opcao;
        switch (opcao)
        {
        case 1:
            int opcaoListaDinamica;
            do
            {
                menuListaDinamica();
                cin >> opcaoListaDinamica;
                switch (opcaoListaDinamica)
                {
                case 1:
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3:
                    /* code */
                    break;
                case 4:
                    /* code */
                    break;
                case 5:
                    /* code */
                    break;
                case 6:
                    /* code */
                    break;
                case 7:
                    /* code */
                    break;
                case 8:
                    /* code */
                    break;

                default:
                    cout << "Opcao invalida\n";
                    break;
                }
            } while (opcaoListaDinamica != 8);
            break;
        case 2:
            int opcaoListaDuplamente;
            do
            {
                menuListaDuplamente();
                cin >> opcaoListaDuplamente;
                switch (opcaoListaDuplamente)
                {
                case 1:
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3:
                    /* code */
                    break;
                case 4:
                    /* code */
                    break;
                case 5:
                    /* code */
                    break;
                case 6:
                    /* code */
                    break;
                case 7:
                    /* code */
                    break;
                case 8:
                    /* code */
                    break;

                default:
                    cout << "Opcao invalida\n";
                    break;
                }
            } while (opcaoListaDuplamente != 8);
            break;
        case 3:
            int opcaoListaEstatica;
            do
            {
                menuListaEstatica();
                cin >> opcaoListaEstatica;
                switch (opcaoListaEstatica)
                {
                case 1:
                    /* code */
                    break;
                case 2:
                    /* code */
                    break;
                case 3:
                    /* code */
                    break;
                case 4:
                    /* code */
                    break;
                case 5:
                    /* code */
                    break;
                case 6:
                    /* code */
                    break;
                case 7:
                    /* code */
                    break;
                case 8:
                    cout << "Saindo...\n";
                    break;

                default:
                    cout << "Opcao invalida\n";
                    break;
                }

            } while (opcaoListaEstatica != 8);
            break;
        case 4:
            cout << "Saindo...\n";
            break;
        default:
            cout << "Opcao invalida\n";
            break;
        }
    } while (opcao != 4);
    return 0;
}

void menu()
{
    cout << "1 - Lista Dinamica\n";
    cout << "2 - Lista Duplamente Encadeada\n";
    cout << "3 - Lista Estatica\n";
    cout << "4 - Sair\n";
    cout << "Escolha uma opcao: ";
}

void menuListaDinamica()
{
    cout << "1 - Inserir no inicio\n";
    cout << "2 - Inserir no final\n";
    cout << "3 - Inserir na posicao\n";
    cout << "4 - Remover no inicio\n";
    cout << "5 - Remover no final\n";
    cout << "6 - Remover na posicao\n";
    cout << "7 - Imprimir\n";
    cout << "8 - Sair\n";
    cout << "Escolha uma opcao: ";
}

void menuListaDuplamente()
{
    cout << "1 - Inserir no inicio\n";
    cout << "2 - Inserir no final\n";
    cout << "3 - Inserir na posicao\n";
    cout << "4 - Remover no inicio\n";
    cout << "5 - Remover no final\n";
    cout << "6 - Remover na posicao\n";
    cout << "7 - Imprimir\n";
    cout << "8 - Sair\n";
    cout << "Escolha uma opcao: ";
}

void menuListaEstatica()
{
    cout << "1 - Inserir no inicio\n";
    cout << "2 - Inserir no final\n";
    cout << "3 - Inserir na posicao\n";
    cout << "4 - Remover no inicio\n";
    cout << "5 - Remover no final\n";
    cout << "6 - Remover na posicao\n";
    cout << "7 - Imprimir\n";
    cout << "8 - Sair\n";
    cout << "Escolha uma opcao: ";
}
