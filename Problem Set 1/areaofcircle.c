/*

#include<stdio.h>
#define PI 3.1415

int areaofCircle(float radius)
{
    float area = PI * radius * radius;
    return area;
}
int main()
{
    float rd;
    printf("Enter the Radius: ");
    scanf("%f", &rd);

    float answer = areaofCircle(rd);
    printf("Area of circle is: ", answer);
    
    return 0;
}

*/


#include<stdio.h>
#define PI 3.14

int main()
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    printf("Area is: %f", area);

    return 0;
}