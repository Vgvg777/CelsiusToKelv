#include<stdio.h>

float temp(float cels)
{
    float kelv;
    kelv=cels+273.15;
    printf("The temperature in Kelvin is:%0.2f",kelv);
}

int main()
{
float cels;
printf("Give me the temperature in Celsius:\n");
scanf("%f",&cels);
temp(cels);

    return 0;
}
