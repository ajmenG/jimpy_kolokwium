/*
Proszę napisać funkcję dopisującą nowy element na końcu listy liniowej:
typedef struct e {
double v;
struct e *nxt;
} * list_t;
Prototyp funkcji wygląda następująco:
 list_t append( list_t list, double new_v );
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct e
{
    double v;
    struct e *nxt;
} *list_t;

list_t append(list_t list, double new_v)
{
    list_t head = list;

    if (list == NULL)
    {
        list = malloc(sizeof(list_t));
        list->v = new_v;
        list->nxt = NULL;
        return list;
    }
    while (list->nxt != NULL)
    {
        list = list->nxt;
    }

    list_t pom = malloc(sizeof(list_t));

    pom->v = new_v;
    pom->nxt = NULL;

    list->nxt = pom;

    return head;
}

// testowanie z wlasnymi wartosciami
int main(int argc, char **argv)
{
    list_t lista = malloc(sizeof(list_t));
    lista->v = 1;
    lista->nxt = NULL;

    lista = append(lista, 2);
    lista = append(lista, 3);
    lista = append(lista, 4);

    while (lista != NULL)
    {
        printf("%lf\n", lista->v);
        lista = lista->nxt;
    }

    return 0;
}