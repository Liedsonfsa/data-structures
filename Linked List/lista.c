#include "lista.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int id = 0;

struct lista{
    int id, idade;
    float altura;
    char name[100];
    struct lista *anterior;
    struct lista *proximo;
};

Lista *criarLista(){
    return NULL;
}

int size(Lista *l){
    Lista *aux;

    aux = l;

    int count = 0;

    while(aux){
        count++;
        aux = aux->proximo;
    }

    return count;
}

Lista *inserirNoInicio(Lista *atual){
    Lista *new = (Lista*)malloc(sizeof(Lista));

    //new->id = rand() % 100;
    new->id = id;
    id++;

    new->anterior = NULL;
    new->proximo = atual;


    if(!atual){
        new->proximo = NULL;
    } else{
        atual->anterior = new;
    }

    return new;
}

Lista *inserirNoFim(Lista *l){
    Lista *novo = malloc(sizeof(Lista));
    Lista *aux, *aux2;

    if(novo){
        //novo->id = rand() % 100;
        novo->id = id;
        id++;
        novo->proximo = NULL;

        if(!l){
            l = novo;
        } else{
            aux = l;

            while(aux){
                aux2 = aux;
                aux = aux->proximo;
            }

            novo->anterior = aux2;
            aux2->proximo = novo;
        }
    }

    return l;
}

void mostrar(Lista *l){
    printf("%5d", l->id);
}

void mostrarIF(Lista *l){
    Lista *aux;

    aux = l;

    while(aux){
        mostrar(aux);
        aux = aux->proximo;
    }

    printf("\n");
}

void mostrarFI(Lista *l){
    Lista *aux, *aux2;

    aux = l;

    while(aux){
        aux2 = aux;
        aux = aux->proximo;
    }

    while(aux2){
        mostrar(aux2);
        aux2 = aux2->anterior;
    }

    printf("\n");

}

Lista *inserirNoMeio(Lista *l){
    Lista *aux, *aux2;
    Lista *new;

    new = (Lista*)malloc(sizeof(Lista));
    new->id = -1;

    aux = l;

    int meio = size(l) / 2;

    int i = 0;

    while(aux){
        if(i == meio){
            aux2 = aux->proximo;
            aux->proximo = new;
            new->anterior = aux;

            new->proximo = aux2;
            aux2->anterior = new;
            break;
        }

        i++;
        aux = aux->proximo;
    }

    return l;

}