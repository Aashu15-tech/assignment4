/*Write a C program to print all numbers between
 1 to 100 which divided by a specified number
 and the remainder will be 3.*/

#include <stdio.h>

int main()
{
    int divisor;
    printf("enter divisor :");
    scanf("%d", &divisor);

    for (int i = 1; i <= 100; i++)
    {
        if (i % divisor == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}