#include<stdio.h>
#include<conio.h>
float area(float);
int main()
{
    float r,Area;
    printf("Enter radius of a circle: ");
    scanf("%f",&r);
    Area=area(r);
    printf("Area of circle is: %f",Area);
    return 0;
}
float area(float a)
{
    float b;
    b=3.14*(a*a);
    return b;
}
