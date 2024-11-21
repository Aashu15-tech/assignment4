// Write a C program to swap the elements of two arrays.

#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3}, brr[3] = {4, 5, 6};
    for (int i = 0; i < 3; i++)
    printf(" before swap arr[%d] and brr[%d] are %d and %d respectively\n", i, i, arr[i], brr[i]);
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        int temp = brr[i];
        brr[i] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 3; i++)
    printf(" after swap arr[%d] and brr[%d] are %d and %d respectively\n", i, i, arr[i], brr[i]);
    return 0;
}