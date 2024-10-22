#include "header/functions.h"

ListaAlunos criarLista()
{
    ListaAlunos *lista = new ListaAlunos;
    lista->quantidade = 0;

    return *lista;
}

void apagarLista(ListaAlunos *lista)
{
    delete lista;
}

int verificaListaCheia(ListaAlunos *lista)
{
    return lista->quantidade == QUANTIDADE_ALUNOS ? 1 : 0;
}

int verificaListaVazia(ListaAlunos *lista)
{
    return lista->quantidade == 0 ? 1 : 0;
}

void adicionarAlunos(ListaAlunos *lista)
{
    for (int i = 0; i < QUANTIDADE_ALUNOS; i++)
    {
        if (verificaListaCheia(lista))
        {
            cout << "Lista cheia!" << endl;
            return;
        }

        cout << "========= Cadastro " << i + 1 << " =========" << endl;

        cout << "Digite o nome do aluno: ";
        getline(cin, lista->alunos[lista->quantidade].nome);

        cout << "Digite a matrícula do aluno: ";
        cin >> lista->alunos[lista->quantidade].matricula;

        cout << "Digite a nota do aluno: ";
        cin >> lista->alunos[lista->quantidade].nota;

        lista->quantidade++;
        cin.ignore();
    }
}

void exibirAlunos(ListaAlunos *lista)
{
    for (int i = 0; i < lista->quantidade; i++)
    {
        cout << "========= Aluno " << i + 1 << " =========" << endl;
        cout << "Nome: " << lista->alunos[i].nome << endl;
        cout << "Matrícula: " << lista->alunos[i].matricula << endl;
        cout << "Nota: " << lista->alunos[i].nota << endl;
        cout << "===========================" << endl;
    }
}

int inserirAlunoFim(ListaAlunos *lista, Aluno aluno){
    if(verificaListaCheia(lista)){
        cout << "Lista cheia!" << endl;
        return 0;
    }

    lista->alunos[lista->quantidade] = aluno;
    lista->quantidade++;

    return 1;
}

int inserirAlunoInicio(ListaAlunos *lista, Aluno aluno){
    if(verificaListaCheia(lista)){
        cout << "Lista cheia!" << endl;
        return 0;
    }

    //passa o vetor pro lado
    for(int i = lista->quantidade; i > 0; i--){
        lista->alunos[i] = lista->alunos[i - 1];
    }

    //salva o aluno na primeira posição
    lista->alunos[0] = aluno;
    lista->quantidade++;

    return 1;
}

int inserirAlunoOrdenado(ListaAlunos *lista, Aluno aluno){
    //se a lista estiver cheia
    if(verificaListaCheia(lista)){
        cout << "Lista cheia!" << endl;
        return 0;
    }

    //define posição do aluno
    int posicao = 0;

    //percorre a lista
    for (int i = 0; i < lista->quantidade; i++)
    {
        //verifica se a matricula do aluno é menor que a matricula do aluno na posição i
        if(aluno.matricula < lista->alunos[i].matricula){
            //se for, a posição recebe 1
            posicao++;
        }else{
            //se não, sai do loop
            break;
        }
    }

    //posicao = lugar onde o aluno deve ser inserido
    //passa o vetor pro lado
    for(int i = lista->quantidade; i > posicao; i--){
        lista->alunos[i] = lista->alunos[i - 1];
    }

    //insere o aluno na posição correta
    lista->alunos[posicao] = aluno;


    lista->quantidade++;
    return 1;
}

void removerFinal(ListaAlunos *lista){
    if(verificaListaVazia(lista)){
        cout << "Lista vazia!" << endl;
        return;
    }

    lista->quantidade--;
}

void removerInicio(ListaAlunos *lista){
    //verifica se a lista está vazia
    if(verificaListaVazia(lista)){
        cout << "Lista vazia!" << endl;
        return;
    }

    for(int i = 0; i < lista->quantidade; i++){
        //coloca o segundo aluno na primeira posição, removendo o primeiro
        lista->alunos[i] = lista->alunos[i + 1];
    }

    //diminui a quantidade de alunos
    lista->quantidade--;
}
void removerPorMatricula(ListaAlunos *lista, int matricula){
    //verifica se a lista está vazia
    if(verificaListaVazia(lista)){
        cout << "Lista vazia!" << endl;
        return;
    }

    //define a posição do aluno
    int posicao = -1;

    //percorre a lista
    for(int i = 0; i < lista->quantidade; i++){
        //verifica se a matricula do aluno é igual a matricula passada
        if(lista->alunos[i].matricula == matricula){
            //se for, a posição recebe i
            posicao = i;
            break;
        }
    }

    //se a posição for -1, o aluno não foi encontrado
    if(posicao == -1){
        cout << "Aluno não encontrado!" << endl;
        return;
    }

    //passa o vetor pro lado
    for(int i = posicao; i < lista->quantidade; i++){
        //sobrescreve o aluno na posição i com o aluno na posição i + 1 
        lista->alunos[i] = lista->alunos[i + 1];
    }

    //diminui a quantidade de alunos
    lista->quantidade--;
}
