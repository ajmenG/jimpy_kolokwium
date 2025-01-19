/*
Proszę napisać program obliczający liczbę wszystkich małych liter alfabetu we wszystkich argumentach
wywołania i wypisujący wynik na stdout. Wynik powinien zawierać listę tylko tych liter, które wystąpiły na
liście argumentów. Przykład:
./a.out Ala ma kota
’a’ – 3, ’k’ – 1, ’m’ – 1, ’o’ - 1, ’t’ – 1,
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int tab[30];
    for (int i = 0; i <= 26; i++)
    {
        tab[i] = 0;
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
            {
                tab[(int)argv[i][j] - (int)('a')]++;
            }
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (tab[i] != 0)
            printf("'%c' - %d, ", 'a' + i, tab[i]);
    }
}