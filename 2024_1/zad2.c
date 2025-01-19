/*
Proszę napisać funkcję, która w napisie s zastąpi wszystkie znaki x przez znaki y, a znaki y przez znaki x i
zwróci liczbę dokonanych zmian: int char_xchg(char *s, char x, char y)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int char_xchg(char *s, char x, char y)
{
    int changes = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == x)
        {
            s[i] = y;
            changes++;
        }
        else if (s[i] == y)
        {
            s[i] = x;
            changes++;
        }
    }
    return changes;
}

// testowanie z wlasnymi wartosciami
int main(int argc, char **argv)
{
    char x = argv[1][0];
    char y = argv[2][0];
    char *s = argv[3];

    printf("Zamieniono %d znakow\n", char_xchg(s, x, y));
    printf("%s\n", s);

    return 0;
}
