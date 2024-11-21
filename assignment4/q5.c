// Write a C program to print the elements of an array in reverse order

#include<stdio.h>

int main(){
    int arr[3][2];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        scanf("%d", &arr[i][j]);
    }

    for(int i=2;i>=0;i--)
    {
        for(int j=1;j>=0;j--)
        printf("%d",arr[i][j]);
    }
    return 0;
}