#include "header/functions.h"

int main(){
    ListaAlunos lista = criarLista();

    adicionarAlunos(&lista);
    exibirAlunos(&lista);

    apagarLista(&lista);
    return 0;
}
