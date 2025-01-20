/*
Proszę napisać program wypisujący sumę liczb rzeczywistych w pliku tekstowym,
którego nazwę podano jako argument wywołania.
*/

#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *plik = argc > 1 ? fopen(argv[1], "r") : NULL;

    if (plik == NULL)
        return 1;
    double suma = 0, pom;
    while (fscanf(plik, "%lf", &pom) != EOF)
    {
        suma += pom;
    }
    printf("SUMA TO : %lf", suma);

    fclose(plik);
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
//     FILE *plik = fopen(argv[1], "r");
//     double price, maxprice = 0;
//     char produkt[100], maxprodukt[100];
//     char waluta[10], maxwaluta[10];
//     while (fscanf(plik, "%s %lf %s", produkt, &price, waluta) != EOF)
//     {
//         if (price > maxprice)
//         {
//             maxprice = price;
//             strcpy(maxprodukt, produkt);
//             strcpy(maxwaluta, waluta);
//         }
//     }
//     printf("%s %lf %s\n", maxprodukt, maxprice, maxwaluta);
// }