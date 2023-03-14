#include<stdio.h>
int main()
{   
    int number;
    scanf("%d", &number);
    
    int ans = 0;
    
    while (number != 0)
    {
       int digit = number % 10;
       ans = (ans * 10) + digit;
       number = number / 10;
    }

    printf("%d", ans);
    return 0;
} 