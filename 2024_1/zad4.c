/*
Proszę zdefiniować strukturę danych opisującą punkt w przestrzeni trójwymiarowej. Proszę napisać funkcję
wyznaczającą najmniejszy promień kuli o środku (0,0,0) zawierającego wszystkie punkty podane w wektorze
takich struktur. Funkcja powinna zwracać zero, jeżeli liczba punktów wynosi 0.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // flaga -lm przy kompilacji jezeli mam math.h

typedef struct
{
    double x, y, z;
} punkt;

double min_radius(punkt *lista, int size)
{
    if (size == 0)
    {
        return 0;
    }
    printf("Liczba elementów w tablicy: %d\n", size);
    double min_radiuss = 0;
    for (int i = 0; i < size; i++)
    {
        punkt pom = lista[i];

        double pom_radius = sqrt(pow(lista[i].x, 2) + pow(lista[i].y, 2) + pow(lista[i].z, 2));
        printf("PROMIEN = %lf\n", pom_radius);
        if (pom_radius > min_radiuss)
        {
            min_radiuss = pom_radius;
        }
    }
    return min_radiuss;
}

// testowanie z wlasnymi wartosciami
int main(int argc, char **argv)
{
    punkt *tab = malloc(3 * sizeof(punkt));
    tab[0].x = 1;
    tab[0].y = 1;
    tab[0].z = 1;
    tab[1].x = 2;
    tab[1].y = 2;
    tab[1].z = 2;
    tab[2].x = 3;
    tab[2].y = 3;
    tab[2].z = 3;

    int n = 3;
    printf("MIN RADIUS = %lf\n", min_radius(tab, n));

    free(tab);
    return 0;
}