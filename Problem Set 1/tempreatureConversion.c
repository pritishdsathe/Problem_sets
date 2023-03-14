#include<stdio.h>

int tempF()
{
    float tempC;
    printf("Enter tempreature in Celcius: ");
    scanf("%f", &tempC);
    
    float tf = tempC * 9 / 5 + 32;
    printf("Tempreture in Fahrenheit: %.2f\n", tf);
}

int tempC()
{
    float tempF;
    printf("Enter tempreture in Fahrenheit: ");
    scanf("%f", &tempF);

    float tc = (tempF-32) * 5 / 9;
    printf("Tempreture in Celcius: %.2f",tc);
}

int main()
{
    float resultF = tempF();
    printf("\n");
    float resultC = tempC();

    return 0;
}