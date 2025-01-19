/*
Proszę napisać program, który wyznaczy maksimum ze wszystkich liczb w pliku tekstowym. Nazwę pliku
podajemy jako argument wywołania. Jeśli program zostanie wywołany bez argumentu, powinien zwrócić kod
zakończenia równy 13. Wynik działania proszę wypisać na stdout. Nie trzeba kontrolować poprawności
danych. Plik zawiera tylko liczby (co najmniej jedną) – nie wiadomo ile ich jest, ale są to tylko poprawnie
zapisane liczby, oddzielane przez białe znaki. Liczby nie muszą być całkowite.
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        // echo $?
        // fprintf(stderr, "NIE PODANO PLIKU, KOD BŁEDU 13");
        return 13;
    }
    double maxi = __DBL_MAX__ * (-1), liczba;
    char *filename = argv[1];
    FILE *plik = fopen(filename, "r");

    while (fscanf(plik, "%lf", &liczba) != EOF)
    {
        if (maxi < liczba)
        {
            maxi = liczba;
        }
    }

    printf("MAXI = %lf", maxi);

    fclose(plik);
    return 0;
}