//Write a C program to find the largest and smallest elements of an array.
#include<stdio.h>
#include<limits.h>
int largest(int arr[])
{
    int max=INT_MIN;
    for(int i=0;i<3;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }

return max;
}
int smallest(int arr[])
{
    int min=INT_MAX;
    for(int i=0;i<3;i++)
    {
    if(arr[i]<min)
    min=arr[i];
    }

return min;
}

int main(){
    int arr[3];

    for(int i=0;i<3;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("max is %d\n",largest(arr));
    printf("max is %d",smallest(arr));
    return 0;
}