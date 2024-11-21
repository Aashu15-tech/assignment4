/*A positive integer is entered through the
keyboard. Along with it the base of the
number system in which you want to convert
this number is entered. Write a C program to do
 this conversion.
    */

// #include <stdio.h>
// #include<math.h>

// int main()
// {
//     int ns, dl_num, temp;
//     printf("enter no ");
//     scanf("%d", &dl_num);
//     printf("enter base of number system(i.e.2,8,10,16) ");
//       scanf("%d", &ns);
//     switch (ns)
//     {
//     case 2:
//        { int bl_num = 0;
//         for (int i = 0; dl_num != 0; i++)
//         {
//             int rem = dl_num % 2;
//             dl_num = dl_num / 2;
//             bl_num = pow(10, i) * rem + bl_num;
//         }
//         dl_num = temp;
//         printf("%d is binary eq of %d decimal no", bl_num, dl_num);

//         break;}
//     case 8:
//        { int oct_num = 0;
//         for (int i = 0; dl_num != 0; i++)
//         {
//             int rem = dl_num % 8;
//             dl_num = dl_num / 8;
//             oct_num = pow(10, i) * rem + oct_num;
//         }
//         dl_num = temp;
//         printf("%d is binary eq of %d decimal no", oct_num, dl_num);

//         break;}
//     case 16:
//         {int hexa_num = 0;
//         for (int i = 0; dl_num != 0; i++)
//         {
//             int rem = dl_num % 16;
//             dl_num = dl_num / 16;
//         hexa_num = pow(10, i) * rem + hexa_num;
//         }
//         dl_num = temp;
//         printf("%d is binary eq of %d decimal no", hexa_num, dl_num);

//         break;
// }
//     default:
//         break;
//     }
//     return 0;
// }

#include <stdio.h>
#include<math.h>
int main()
{
    int ns,ns_num=0, dl_num, temp;
    printf("enter no ");
    scanf("%d", &dl_num);
    printf("enter base of number system(i.e.2,8,10,16) ");
      scanf("%d", &ns);
      temp = dl_num;
    for (int i = 0; dl_num != 0; i++)
    {
        int rem = dl_num % ns;

        dl_num = dl_num / ns;
        ns_num = pow(10, i) * rem + ns_num;
    }
    dl_num = temp;
    printf("%d is respective eq of %d decimal no", ns_num, dl_num);
    return 0;
}