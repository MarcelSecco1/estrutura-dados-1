#include <head/listaDinamica.h>

Lista *criaLista()
{
    Lista *li = new Lista;

    if (li != NULL)
    {
        *li = NULL;
    }

    return li;
}

bool verificaLista(Lista *li)
{
    if (li == nullptr)
    {
        return true;
    }

    return false;
}

bool verificaListaVazia(Lista *li)
{
    if ((*li) == nullptr)
    {
        return true;
    }

    return false;
}

int insereInicio(Lista *li, int dado)
{

    if (verificaLista(li))
    {
        return 0;
    }

    No *novoNo = new No;

    novoNo->dado = dado;
    novoNo->prox = (*li);

    *li = novoNo;
}

int insereFinal(Lista *li, int dado)
{
    if (verificaLista(li))
    {
        return 0;
    }

    No *novoNo = new No;

    if (novoNo == nullptr)
    {
        return 0;
    }

    novoNo->dado = dado;
    novoNo->prox = nullptr;

    if (verificaListaVazia(li)) // lista vazia
    {
        *li = novoNo;
        return 1;
    }

    No *aux = *li;

    while (aux->prox != nullptr)
    {
        aux = aux->prox;
    }

    aux->prox = novoNo;

    return 1;
}

int removeInicio(Lista *li)
{
    if (verificaLista(li))
    {
        return 0;
    }

    if (verificaListaVazia(li))
    {
        return 0;
    }

    No *noInicio = *li;
    *li = noInicio->prox;

    delete noInicio;
    return 1;
}

int removeFinal(Lista *li)
{
    if (verificaLista(li))
    {
        return 0;
    }

    if (verificaListaVazia(li))
    {
        return 0;
    }

    No *aux = *li;
    No *ant;

    while (aux->prox != nullptr)
    {
        ant = aux;
        aux = aux->prox;
    }

    if (aux == (*li))
        *li = nullptr;
    else
        ant->prox = nullptr;

    delete aux;
}

int removeDado(Lista *li, int dado)
{
    if (verificaLista(li))
    {
        return 0;
    }

    if (verificaListaVazia(li))
    {
        return 0;
    }

    No *ant, *aux = *li;

    while (aux->prox != nullptr && aux->dado != dado)
    {
        ant = aux;
        aux = aux->prox;
    }

    if(aux->dado != dado){ //nao encontrado
        return 0;
    }

    aux == (*li)
        ? *li = nullptr
        : ant->prox = aux->prox;

    delete aux;
    return 1;
}
