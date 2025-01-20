/*
Proszę napisać program wypisujący liczbę znaków w najdłuższej linii w pliku,
którego nazwę podano jako argument wywołania. Przykład:
$./a.out moj_plik
najdłuższa linia pliku 'moj_plik' liczy 107346 znaków
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *plik = argc > 1 ? fopen(argv[1], "r") : NULL;
    if (plik == NULL)
        return 1;

    int maxi = 0;
    int count = 0;
    int ch;

    while ((ch = fgetc(plik)) != EOF)
    {
        if (ch == '\n')
        {
            if (count > maxi)
            {
                maxi = count;
            }
            count = 0;
        }
        else
        {
            count++;
        }
    }

    if (count > maxi)
    {
        maxi = count;
    }

    printf("najdłuższa linia pliku '%s' liczy %d znaków", argv[1], maxi);
}