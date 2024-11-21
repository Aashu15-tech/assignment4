//Write a C program to find the average of the elements of an integer array. Also find the standard deviation of these elements.

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("no of elements in list :");
    scanf("%d", &n);
    float mean=0,stddev,sum_of_diff=0,arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%f", &arr[i]);
        mean=mean + (arr[i])/n;
    }
    for(int i=0;i<n;i++)
        sum_of_diff=sum_of_diff+pow((arr[i]-mean),2);

    stddev=sqrt(sum_of_diff);

    printf("%f %f",mean,stddev);
return 0;
}
