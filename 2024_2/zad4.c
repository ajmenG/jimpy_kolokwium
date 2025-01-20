/*
Proszę napisać program, który posortuje alfabetycznie argumenty, z którymi został
wywołany i wypisze je na stdout.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char **argv)
{
    qsort(argv + 1, argc - 1, sizeof(char *), compare);

    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}