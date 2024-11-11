#ifndef LISTADINAMICA_H_INCLUDED
#define LISTADINAMICA_H_INCLUDED


struct ALUNO{
    int matricula;
    char nome[50];
    float nota;
};
typedef struct ALUNO Aluno;

struct NODE{
    Aluno dadosAl;
    struct NODE *prox;
};

typedef struct NODE *Lista;
typedef struct NODE No;

void cadastrarAluno(Aluno *alunoN);
Lista* criarLista();
void liberarLista(Lista* inicioLista);

void retornoOperacao(int x);

int inserirFinal(Lista* inicioLista, Aluno *alunoN);
int inserirInicio(Lista* inicioLista, Aluno *alunoN);
int inserirItem(Lista* inicioLista, Aluno *alunoN);

void imprimirLista(Lista* inicioLista);

int removerItem(Lista* inicioLista, int mat);
int removerInicio(Lista* inicioLista);
int removerFinal(Lista* inicioLista);

int consultarMatricula(Lista* inicioLista, int mat);
int consultarPosicao(Lista* inicioLista, int pos);


#endif // LISTADINAMICA_H_INCLUDED
