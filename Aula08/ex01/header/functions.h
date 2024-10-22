#include <iostream>
#include <string>
#define QUANTIDADE_ALUNOS 2

using namespace std;

struct Aluno
{
    string nome;
    int matricula;
    float nota;
};
typedef struct Aluno Aluno;

struct ListaAlunos
{
    Aluno alunos[QUANTIDADE_ALUNOS];
    int quantidade;
};
typedef struct ListaAlunos ListaAlunos;

ListaAlunos criarLista();
void apagarLista(ListaAlunos *lista);
int verificaListaCheia(ListaAlunos *lista);
int verificaListaVazia(ListaAlunos *lista);
void adicionarAlunos(ListaAlunos *lista);
void exibirAlunos(ListaAlunos *lista);
int inserirAlunoFim(ListaAlunos *lista, Aluno aluno);
int inserirAlunoInicio(ListaAlunos *lista, Aluno aluno);
int inserirAlunoOrdenado(ListaAlunos *lista, Aluno aluno);
