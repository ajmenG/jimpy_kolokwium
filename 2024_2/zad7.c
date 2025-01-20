/*
Struktura
typedef struct{
double *v;
int n;
} vect;
Proszę napisać funkcję przeglądającą tablicę (wektor) zawierający takie struktury i
zwracającą ten element tablicy, którego pole n ma największa wartość.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    double *v;
    int n;
} vect;

vect max_n(vect *tab, int size)
{
    vect max = tab[0];
    for (int i = 1; i < size; i++)
    {
        if (tab[i].n > max.n)
        {
            max = tab[i];
        }
    }
    return max;
}

int main()
{
    vect tab[] = {
        {{1, 2, 3}, 3},
        {{1, 2, 3, 4, 5}, 5},
        {{1, 2, 3, 4, 5, 6, 7}, 7},
        {{1, 2, 3, 4, 5, 6, 7, 8, 9}, 9},
        {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10},
    };

    vect max = max_n(tab, 5);

    printf("najwieksza wartosc n: %d\n", max.n);
    for (int i = 0; i < max.n; i++)
    {
        printf("%f ", max.v[i]);
    }

    return 0;
}