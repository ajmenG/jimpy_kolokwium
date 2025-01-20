/*
Proszę napisać program wypisujący na standardowe wyjście zadaną liczbę liczb
rzeczywistych rozłożonych losowo w zadanym przedziale. Przedział określają pierwsze dwa
argumenty, a liczbę liczb trzeci). Liczby muszą zostać wypisane w kolejności rosnącej lub
malejącej (od pierwszego do drugiego argumentu). Na przykład:
$./a.out -4 2.6 4
-4.0 -1.98 0.47 2.6
$./a.out 5 0 5
5 2.68 0.47 0.11 0
 Proszę sprawdzać, czy liczba argumentów wywołania to 3.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        return 1;
    }

    float a = atof(argv[1]);
    float b = atof(argv[2]);
    int n = atoi(argv[3]);

    srand(time(NULL));

    if (a > b)
    {
        float temp = a;
        a = b;
        b = temp;
    }

    for (int i = 0; i < n; i++)
    {
        float x = (float)rand() / RAND_MAX * (b - a) + a;
        printf("%.2f ", x);
    }

    return 0;
}