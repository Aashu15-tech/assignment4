/*Write a C  program to print each of the following output patterns.*/
//patern 1
/*
#include<stdio.h>

int main(){
    int n;
    printf("no of lines :");
    scanf("%d", &n);

    for(int i=1;i<n+1;i++){
        for(int j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    return 0;
}
*/

//pattern 2

/*
#include<stdio.h>
int main(){
    int n;
    printf("no of lines :");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--)
        printf("*");
        printf("\n");

    }
    return 0;
}
*/


//pattern 3

// #include<stdio.h>
// int main(){
//     int n;
//     printf("no of lines :");
//     scanf("%d", &n);
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n-1;j>i;j--)
//         printf(" ");
//         for(int j=0;j<2*i+1;j++)
//         printf("*");
// printf("\n");
//     }
//     return 0;
// }


//pattern 3