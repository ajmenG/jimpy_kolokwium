/*
Proszę napisać funkcję
list_t del_last( list_t l );
usuwającą ostatni element listy linowej zdefiniowanej jako:
typedef struct elem {
char c;
struct elem *nast;
} * list_t;
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct elem
{
    char c;
    struct elem *nast;
} *list_t;

list_t del_last(list_t l)
{
    list_t head = l;

    if (l == NULL)
    {
        return NULL;
    }
    if (l->nast == NULL)
    {
        free(l);
        return NULL;
    }

    while (l->nast->nast != NULL)
    {
        l = l->nast;
    }
    free(l->nast);
    l->nast = NULL;
    return head;
}

// testowanie
int main()
{
    list_t l = malloc(sizeof(struct elem));
    l->c = 'a';
    l->nast = malloc(sizeof(struct elem));
    l->nast->c = 'b';
    l->nast->nast = malloc(sizeof(struct elem));
    l->nast->nast->c = 'c';
    l->nast->nast->nast = malloc(sizeof(struct elem));
    l->nast->nast->nast->c = 'd';
    l->nast->nast->nast->nast = NULL;

    list_t head = del_last(l);

    while (head != NULL)
    {
        printf("%c ", head->c);
        head = head->nast;
    }
    return 0;
}