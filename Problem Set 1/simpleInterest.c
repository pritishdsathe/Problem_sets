#include<stdio.h>
int main()
{
    float principle, duaration, roi;
    scanf("%f %f %f", &principle, &duaration, &roi);

    float si= (principle * duaration * roi) /100;
    printf("Simple Interest is: %2.f", si);
    
    return 0;
}