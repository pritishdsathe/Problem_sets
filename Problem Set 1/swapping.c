#include<stdio.h>
int main()
{
    int a=10;
    int b = 20;
    int temp = 0;

    printf("%d %d\n", a, b);

     temp = a;
     a = b;
     b = temp; 

    printf("%d %d", a, b);

    return 0;
}