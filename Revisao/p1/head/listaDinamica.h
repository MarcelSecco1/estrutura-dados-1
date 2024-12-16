#ifndef LISTADINAMICA_H
#define LISTADINAMICA_H

#include <listas.h>


struct NODE{
    int dado;
    struct NODE *prox;
};

typedef struct NODE *Lista;
typedef struct NODE No;


Lista *criaLista();
bool verificaLista(Lista *li);
bool verificaListaVazia(Lista *li);
int insereInicio(Lista *li, int dado);
int insereFinal(Lista *li, int dado);
int insereOrdenado(Lista *li, int dado);
int removeInicio(Lista *li);
int removeFinal(Lista *li);
int removeDado(Lista *li, int dado);
void imprimeLista(Lista *li);

#endif
