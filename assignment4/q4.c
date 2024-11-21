/*Write a C program to print the following Pascal’s Triangle.*/


#include<stdio.h>

int ncr(int n,int r)
{  if(r==0)
return 1;
    return ncr(n-1,r-1)*n/r;
}

int main(){
    int n;
    printf("enter no. of lines :");
   scanf("%d", &n);
    for(int i=1;i<=n;i++) //no of lines =n
    { for(int k=n;k>i-1;k--)
      printf(" ");
      for(int j=0;j<i-1;j++)     //inner no
      printf("%d ",ncr(i-1,j));
      printf("1 ");
      printf("\n");
    }
    
    return 0;
}