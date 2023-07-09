#include "lista.h"
#include "lista.c"
#include <stdio.h>

int main() {

    Lista *l;

    l = criarLista();

    srand(time(NULL));

    l = inserirNoInicio(l);
    l = inserirNoInicio(l);
    l = inserirNoInicio(l);
    l = inserirNoFim(l);
    l = inserirNoMeio(l);
    l = inserirNoFim(l);
    l = inserirNoFim(l);
    l = inserirNoMeio(l);
    l = inserirNoFim(l);
    l = inserirNoInicio(l);
    l = inserirNoFim(l);
    l = inserirNoFim(l);
    l = inserirNoInicio(l);
    l = inserirNoInicio(l);
    l = inserirNoInicio(l);
    l = inserirNoInicio(l);
    l = inserirNoMeio(l);

    mostrarIF(l);

    printf("\n\n");

    mostrarFI(l);

    return 0;
}

// https://br.ccm.net/faq/10226-listas-circulares-ring-buffer