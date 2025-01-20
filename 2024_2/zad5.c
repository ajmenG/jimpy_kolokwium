/*
Proszę napisać funkcję, która otrzymuje jako argument wektor liczb typu int (+ jego
długość, rzecz jasna) i odwraca kolejność liczb w parach (zamienia pierwszą z drugą, trzecią
z czwartą, itd). Prawidłowe rozwiązanie nie wymaga rezerwacji pamięci na dodatkowy
wektor.
*/
#include <stdio.h>

void reverse_pairs(int *tab, int n)
{
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i + 1] = temp;
    }
}