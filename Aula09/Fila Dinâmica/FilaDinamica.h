#ifndef FILADINAMICA_H_INCLUDED
#define FILADINAMICA_H_INCLUDED
struct ALUNO{
    int matricula;
    char nome[30];
    float nota;
};
typedef struct ALUNO Aluno;
struct elemento{
    Aluno dados;
    struct elemento *prox;
};
typedef struct elemento Elem;
struct FILA{
    Elem *inicio;
    Elem *final;
    int qtd;
};
typedef struct FILA Fila;

Fila* criarFila();
void liberarFila(Fila* fila);
int consultarFila(Fila* fila, Aluno *alunoN);
int inserirFila(Fila* fila, Aluno *alunoN);
int removerFila(Fila* fila);
int tamanhoFila(Fila* fila);
int FilaEhVazia(Fila* fila);
int FilaEhCheia(Fila* fila);
int imprimirFila(Fila* fila);
void cadastrarAluno(Aluno *alunoN);
#endif // FILADINAMICA_H_INCLUDED
