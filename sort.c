#include <stdbool.h>
#include <stdio.h>
#include "sort.h"
void print_array(int a[],int length)
{
    for (int i = 0; i < length; i++)
        printf("a[%d] = %d\n",i,a[i]);
}
void bubble_sort(int a[],int length)
{
    bool swapped = false;
    int i = 0;
    do
    {
        swapped = false;
        for(int j =0; j < (length - 1 - i);j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j+1] = temp;
                swapped = true;
            }
        }
        i ++;
    } while (swapped);
}
void selection_sort(int a[],int length)
{
    for(int i = 0; i < length - 1; i++)
    {
        int min_pos=i;
        for(int j = i + 1; j < length; j++)
            if(a[j] < a[min_pos]) min_pos = j;
        if (min_pos != i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
        }
    }
}
void insertion_sort(int a[],int length)
{
    int i, key, j;
    for(i = 1; i < length; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void bubble_a(int a[], int n) {
    int i, j, x;
    int changes;  // Zmienna, aby śledzić, czy wystąpiła zmiana podczas iteracji

    for (j = n - 1; j > 0; j--) {
        changes = 0;  // Resetujemy licznik zmian przed każdym przebiegiem pętli

        for (i = 0; i < j; i++) {
            if (a[i] > a[i + 1]) {
                x = a[i];
                a[i] = a[i + 1];
                a[i + 1] = x;
                changes = 1;  // Ustawiamy zmianę na 1, jeżeli wykonano zamianę
            }
        }
        if (changes == 0) {
            break;  // Jeżeli nie wykonano żadnej zmiany, to tablica jest już posortowana
        }
    }
}
void bubble_b(int a[], int length)
{
    int i,j,temp;
    int k = 0;
    for (j = length - 1; j > 0; j = k)
    {
        k = 0;
        for(i = 0; i < j; i++)
        {
            if(a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i +1];
                a[i+1] = temp;
                k = i;
            }
        }
    }
}
//
// Created by Jan Pieczkowski on 16/12/2023.
//