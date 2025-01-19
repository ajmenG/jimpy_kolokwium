/*
Proszę napisać funkcję
int *mk_vec( int k, int sv, int ev ), która stworzy i zwróci wektor, zawierający k wartości typu int,
losowanych z przedziału <sv,ev>.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *mk_vec(int k, int sv, int ev)
{
    srand(time(NULL));

    int *tab = malloc(k * sizeof(int));

    for (int i = 0; i < k; i++)
    {
        tab[i] = rand() % (ev - sv + 1) + sv;
    }
    return tab;
}

// test z wlasnymi wartosciami
int main(int argc, char *argv[])
{
    int a, b, c;
    if (argc == 4)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);
    }
    else
    {
        a = 10;
        b = 1;
        c = 10;
    }
    int *tab = mk_vec(a, b, c);

    for (int i = 0; i < a; i++)
    {
        printf("%d ", tab[i]);
    }

    free(tab);
    return 0;
}